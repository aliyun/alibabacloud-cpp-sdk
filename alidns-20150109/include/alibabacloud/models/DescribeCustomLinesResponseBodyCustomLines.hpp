// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINESRESPONSEBODYCUSTOMLINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINESRESPONSEBODYCUSTOMLINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomLinesResponseBodyCustomLinesIpSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCustomLinesResponseBodyCustomLines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomLinesResponseBodyCustomLines& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpSegmentList, ipSegmentList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomLinesResponseBodyCustomLines& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpSegmentList, ipSegmentList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeCustomLinesResponseBodyCustomLines() = default ;
    DescribeCustomLinesResponseBodyCustomLines(const DescribeCustomLinesResponseBodyCustomLines &) = default ;
    DescribeCustomLinesResponseBodyCustomLines(DescribeCustomLinesResponseBodyCustomLines &&) = default ;
    DescribeCustomLinesResponseBodyCustomLines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomLinesResponseBodyCustomLines() = default ;
    DescribeCustomLinesResponseBodyCustomLines& operator=(const DescribeCustomLinesResponseBodyCustomLines &) = default ;
    DescribeCustomLinesResponseBodyCustomLines& operator=(DescribeCustomLinesResponseBodyCustomLines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->id_ != nullptr && this->ipSegmentList_ != nullptr && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCustomLinesResponseBodyCustomLines& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCustomLinesResponseBodyCustomLines& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipSegmentList Field Functions 
    bool hasIpSegmentList() const { return this->ipSegmentList_ != nullptr;};
    void deleteIpSegmentList() { this->ipSegmentList_ = nullptr;};
    inline const vector<Models::DescribeCustomLinesResponseBodyCustomLinesIpSegmentList> & ipSegmentList() const { DARABONBA_PTR_GET_CONST(ipSegmentList_, vector<Models::DescribeCustomLinesResponseBodyCustomLinesIpSegmentList>) };
    inline vector<Models::DescribeCustomLinesResponseBodyCustomLinesIpSegmentList> ipSegmentList() { DARABONBA_PTR_GET(ipSegmentList_, vector<Models::DescribeCustomLinesResponseBodyCustomLinesIpSegmentList>) };
    inline DescribeCustomLinesResponseBodyCustomLines& setIpSegmentList(const vector<Models::DescribeCustomLinesResponseBodyCustomLinesIpSegmentList> & ipSegmentList) { DARABONBA_PTR_SET_VALUE(ipSegmentList_, ipSegmentList) };
    inline DescribeCustomLinesResponseBodyCustomLines& setIpSegmentList(vector<Models::DescribeCustomLinesResponseBodyCustomLinesIpSegmentList> && ipSegmentList) { DARABONBA_PTR_SET_RVALUE(ipSegmentList_, ipSegmentList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomLinesResponseBodyCustomLines& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The code of the custom line.
    std::shared_ptr<string> code_ = nullptr;
    // The unique ID of the custom line.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCustomLinesResponseBodyCustomLinesIpSegmentList>> ipSegmentList_ = nullptr;
    // The name of the custom line.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

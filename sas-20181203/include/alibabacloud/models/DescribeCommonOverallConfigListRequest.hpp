// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCommonOverallConfigListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonOverallConfigListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TypeList, typeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonOverallConfigListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
    };
    DescribeCommonOverallConfigListRequest() = default ;
    DescribeCommonOverallConfigListRequest(const DescribeCommonOverallConfigListRequest &) = default ;
    DescribeCommonOverallConfigListRequest(DescribeCommonOverallConfigListRequest &&) = default ;
    DescribeCommonOverallConfigListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonOverallConfigListRequest() = default ;
    DescribeCommonOverallConfigListRequest& operator=(const DescribeCommonOverallConfigListRequest &) = default ;
    DescribeCommonOverallConfigListRequest& operator=(DescribeCommonOverallConfigListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceIp_ != nullptr
        && this->typeList_ != nullptr; };
    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeCommonOverallConfigListRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<string> & typeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<string>) };
    inline vector<string> typeList() { DARABONBA_PTR_GET(typeList_, vector<string>) };
    inline DescribeCommonOverallConfigListRequest& setTypeList(const vector<string> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline DescribeCommonOverallConfigListRequest& setTypeList(vector<string> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


  protected:
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The types of the configuration items.
    // 
    // >  You can query up to 50 types at a time.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> typeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

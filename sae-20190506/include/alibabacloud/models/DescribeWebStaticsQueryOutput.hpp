// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBSTATICSQUERYOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBSTATICSQUERYOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WebStaticsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeWebStaticsQueryOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebStaticsQueryOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(WebStatics, webStatics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebStaticsQueryOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(WebStatics, webStatics_);
    };
    DescribeWebStaticsQueryOutput() = default ;
    DescribeWebStaticsQueryOutput(const DescribeWebStaticsQueryOutput &) = default ;
    DescribeWebStaticsQueryOutput(DescribeWebStaticsQueryOutput &&) = default ;
    DescribeWebStaticsQueryOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebStaticsQueryOutput() = default ;
    DescribeWebStaticsQueryOutput& operator=(const DescribeWebStaticsQueryOutput &) = default ;
    DescribeWebStaticsQueryOutput& operator=(DescribeWebStaticsQueryOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->length_ == nullptr
        && this->webStatics_ == nullptr; };
    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline DescribeWebStaticsQueryOutput& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // webStatics Field Functions 
    bool hasWebStatics() const { return this->webStatics_ != nullptr;};
    void deleteWebStatics() { this->webStatics_ = nullptr;};
    inline const vector<WebStaticsInfo> & getWebStatics() const { DARABONBA_PTR_GET_CONST(webStatics_, vector<WebStaticsInfo>) };
    inline vector<WebStaticsInfo> getWebStatics() { DARABONBA_PTR_GET(webStatics_, vector<WebStaticsInfo>) };
    inline DescribeWebStaticsQueryOutput& setWebStatics(const vector<WebStaticsInfo> & webStatics) { DARABONBA_PTR_SET_VALUE(webStatics_, webStatics) };
    inline DescribeWebStaticsQueryOutput& setWebStatics(vector<WebStaticsInfo> && webStatics) { DARABONBA_PTR_SET_RVALUE(webStatics_, webStatics) };


  protected:
    shared_ptr<int32_t> length_ {};
    shared_ptr<vector<WebStaticsInfo>> webStatics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif

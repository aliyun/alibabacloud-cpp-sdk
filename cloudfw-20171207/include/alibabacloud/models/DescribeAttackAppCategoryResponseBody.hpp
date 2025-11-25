// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKAPPCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKAPPCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAttackAppCategoryResponseBodyAppCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAttackAppCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttackAppCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppCategories, appCategories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttackAppCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCategories, appCategories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAttackAppCategoryResponseBody() = default ;
    DescribeAttackAppCategoryResponseBody(const DescribeAttackAppCategoryResponseBody &) = default ;
    DescribeAttackAppCategoryResponseBody(DescribeAttackAppCategoryResponseBody &&) = default ;
    DescribeAttackAppCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttackAppCategoryResponseBody() = default ;
    DescribeAttackAppCategoryResponseBody& operator=(const DescribeAttackAppCategoryResponseBody &) = default ;
    DescribeAttackAppCategoryResponseBody& operator=(DescribeAttackAppCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCategories_ == nullptr
        && return this->requestId_ == nullptr; };
    // appCategories Field Functions 
    bool hasAppCategories() const { return this->appCategories_ != nullptr;};
    void deleteAppCategories() { this->appCategories_ = nullptr;};
    inline const vector<DescribeAttackAppCategoryResponseBodyAppCategories> & appCategories() const { DARABONBA_PTR_GET_CONST(appCategories_, vector<DescribeAttackAppCategoryResponseBodyAppCategories>) };
    inline vector<DescribeAttackAppCategoryResponseBodyAppCategories> appCategories() { DARABONBA_PTR_GET(appCategories_, vector<DescribeAttackAppCategoryResponseBodyAppCategories>) };
    inline DescribeAttackAppCategoryResponseBody& setAppCategories(const vector<DescribeAttackAppCategoryResponseBodyAppCategories> & appCategories) { DARABONBA_PTR_SET_VALUE(appCategories_, appCategories) };
    inline DescribeAttackAppCategoryResponseBody& setAppCategories(vector<DescribeAttackAppCategoryResponseBodyAppCategories> && appCategories) { DARABONBA_PTR_SET_RVALUE(appCategories_, appCategories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAttackAppCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeAttackAppCategoryResponseBodyAppCategories>> appCategories_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

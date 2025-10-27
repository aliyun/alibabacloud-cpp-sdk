// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOCRITERIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOCRITERIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageRepoCriteriaResponseBodyCriteriaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRepoCriteriaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoCriteriaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoCriteriaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageRepoCriteriaResponseBody() = default ;
    DescribeImageRepoCriteriaResponseBody(const DescribeImageRepoCriteriaResponseBody &) = default ;
    DescribeImageRepoCriteriaResponseBody(DescribeImageRepoCriteriaResponseBody &&) = default ;
    DescribeImageRepoCriteriaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoCriteriaResponseBody() = default ;
    DescribeImageRepoCriteriaResponseBody& operator=(const DescribeImageRepoCriteriaResponseBody &) = default ;
    DescribeImageRepoCriteriaResponseBody& operator=(DescribeImageRepoCriteriaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteriaList_ == nullptr
        && return this->requestId_ == nullptr; };
    // criteriaList Field Functions 
    bool hasCriteriaList() const { return this->criteriaList_ != nullptr;};
    void deleteCriteriaList() { this->criteriaList_ = nullptr;};
    inline const vector<DescribeImageRepoCriteriaResponseBodyCriteriaList> & criteriaList() const { DARABONBA_PTR_GET_CONST(criteriaList_, vector<DescribeImageRepoCriteriaResponseBodyCriteriaList>) };
    inline vector<DescribeImageRepoCriteriaResponseBodyCriteriaList> criteriaList() { DARABONBA_PTR_GET(criteriaList_, vector<DescribeImageRepoCriteriaResponseBodyCriteriaList>) };
    inline DescribeImageRepoCriteriaResponseBody& setCriteriaList(const vector<DescribeImageRepoCriteriaResponseBodyCriteriaList> & criteriaList) { DARABONBA_PTR_SET_VALUE(criteriaList_, criteriaList) };
    inline DescribeImageRepoCriteriaResponseBody& setCriteriaList(vector<DescribeImageRepoCriteriaResponseBodyCriteriaList> && criteriaList) { DARABONBA_PTR_SET_RVALUE(criteriaList_, criteriaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageRepoCriteriaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the filter conditions that are supported by the image repository.
    std::shared_ptr<vector<DescribeImageRepoCriteriaResponseBodyCriteriaList>> criteriaList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

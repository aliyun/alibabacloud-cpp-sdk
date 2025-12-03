// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENDATAMAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENDATAMAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScreenDataMapResponseBodySasScreenTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenDataMapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenDataMapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SasScreenTypeList, sasScreenTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenDataMapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SasScreenTypeList, sasScreenTypeList_);
    };
    DescribeScreenDataMapResponseBody() = default ;
    DescribeScreenDataMapResponseBody(const DescribeScreenDataMapResponseBody &) = default ;
    DescribeScreenDataMapResponseBody(DescribeScreenDataMapResponseBody &&) = default ;
    DescribeScreenDataMapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenDataMapResponseBody() = default ;
    DescribeScreenDataMapResponseBody& operator=(const DescribeScreenDataMapResponseBody &) = default ;
    DescribeScreenDataMapResponseBody& operator=(DescribeScreenDataMapResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sasScreenTypeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenDataMapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sasScreenTypeList Field Functions 
    bool hasSasScreenTypeList() const { return this->sasScreenTypeList_ != nullptr;};
    void deleteSasScreenTypeList() { this->sasScreenTypeList_ = nullptr;};
    inline const vector<DescribeScreenDataMapResponseBodySasScreenTypeList> & sasScreenTypeList() const { DARABONBA_PTR_GET_CONST(sasScreenTypeList_, vector<DescribeScreenDataMapResponseBodySasScreenTypeList>) };
    inline vector<DescribeScreenDataMapResponseBodySasScreenTypeList> sasScreenTypeList() { DARABONBA_PTR_GET(sasScreenTypeList_, vector<DescribeScreenDataMapResponseBodySasScreenTypeList>) };
    inline DescribeScreenDataMapResponseBody& setSasScreenTypeList(const vector<DescribeScreenDataMapResponseBodySasScreenTypeList> & sasScreenTypeList) { DARABONBA_PTR_SET_VALUE(sasScreenTypeList_, sasScreenTypeList) };
    inline DescribeScreenDataMapResponseBody& setSasScreenTypeList(vector<DescribeScreenDataMapResponseBodySasScreenTypeList> && sasScreenTypeList) { DARABONBA_PTR_SET_RVALUE(sasScreenTypeList_, sasScreenTypeList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeScreenDataMapResponseBodySasScreenTypeList>> sasScreenTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif

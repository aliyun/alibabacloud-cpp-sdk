// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISCHECKITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISCHECKITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClusterDiagnosisCheckItemsResponseBodyCheckItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterDiagnosisCheckItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterDiagnosisCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(check_items, checkItems_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(is_success, isSuccess_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterDiagnosisCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(check_items, checkItems_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(is_success, isSuccess_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
    };
    GetClusterDiagnosisCheckItemsResponseBody() = default ;
    GetClusterDiagnosisCheckItemsResponseBody(const GetClusterDiagnosisCheckItemsResponseBody &) = default ;
    GetClusterDiagnosisCheckItemsResponseBody(GetClusterDiagnosisCheckItemsResponseBody &&) = default ;
    GetClusterDiagnosisCheckItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterDiagnosisCheckItemsResponseBody() = default ;
    GetClusterDiagnosisCheckItemsResponseBody& operator=(const GetClusterDiagnosisCheckItemsResponseBody &) = default ;
    GetClusterDiagnosisCheckItemsResponseBody& operator=(GetClusterDiagnosisCheckItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkItems_ == nullptr
        && return this->code_ == nullptr && return this->isSuccess_ == nullptr && return this->requestId_ == nullptr; };
    // checkItems Field Functions 
    bool hasCheckItems() const { return this->checkItems_ != nullptr;};
    void deleteCheckItems() { this->checkItems_ = nullptr;};
    inline const vector<GetClusterDiagnosisCheckItemsResponseBodyCheckItems> & checkItems() const { DARABONBA_PTR_GET_CONST(checkItems_, vector<GetClusterDiagnosisCheckItemsResponseBodyCheckItems>) };
    inline vector<GetClusterDiagnosisCheckItemsResponseBodyCheckItems> checkItems() { DARABONBA_PTR_GET(checkItems_, vector<GetClusterDiagnosisCheckItemsResponseBodyCheckItems>) };
    inline GetClusterDiagnosisCheckItemsResponseBody& setCheckItems(const vector<GetClusterDiagnosisCheckItemsResponseBodyCheckItems> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
    inline GetClusterDiagnosisCheckItemsResponseBody& setCheckItems(vector<GetClusterDiagnosisCheckItemsResponseBodyCheckItems> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetClusterDiagnosisCheckItemsResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The check item.
    std::shared_ptr<vector<GetClusterDiagnosisCheckItemsResponseBodyCheckItems>> checkItems_ = nullptr;
    // The status code.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the check is successful.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHECKITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECHECKITEMRESPONSEBODY_HPP_
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
  class DeleteCheckItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCheckItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItems, checkItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCheckItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItems, checkItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteCheckItemResponseBody() = default ;
    DeleteCheckItemResponseBody(const DeleteCheckItemResponseBody &) = default ;
    DeleteCheckItemResponseBody(DeleteCheckItemResponseBody &&) = default ;
    DeleteCheckItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCheckItemResponseBody() = default ;
    DeleteCheckItemResponseBody& operator=(const DeleteCheckItemResponseBody &) = default ;
    DeleteCheckItemResponseBody& operator=(DeleteCheckItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckItems& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      };
      friend void from_json(const Darabonba::Json& j, CheckItems& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      };
      CheckItems() = default ;
      CheckItems(const CheckItems &) = default ;
      CheckItems(CheckItems &&) = default ;
      CheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckItems() = default ;
      CheckItems& operator=(const CheckItems &) = default ;
      CheckItems& operator=(CheckItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkShowName_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline CheckItems& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkShowName Field Functions 
      bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
      void deleteCheckShowName() { this->checkShowName_ = nullptr;};
      inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
      inline CheckItems& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    protected:
      // Check item ID.
      shared_ptr<int64_t> checkId_ {};
      // Check item name.
      shared_ptr<string> checkShowName_ {};
    };

    virtual bool empty() const override { return this->checkItems_ == nullptr
        && this->requestId_ == nullptr; };
    // checkItems Field Functions 
    bool hasCheckItems() const { return this->checkItems_ != nullptr;};
    void deleteCheckItems() { this->checkItems_ = nullptr;};
    inline const vector<DeleteCheckItemResponseBody::CheckItems> & getCheckItems() const { DARABONBA_PTR_GET_CONST(checkItems_, vector<DeleteCheckItemResponseBody::CheckItems>) };
    inline vector<DeleteCheckItemResponseBody::CheckItems> getCheckItems() { DARABONBA_PTR_GET(checkItems_, vector<DeleteCheckItemResponseBody::CheckItems>) };
    inline DeleteCheckItemResponseBody& setCheckItems(const vector<DeleteCheckItemResponseBody::CheckItems> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
    inline DeleteCheckItemResponseBody& setCheckItems(vector<DeleteCheckItemResponseBody::CheckItems> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCheckItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of deleted custom check items.
    shared_ptr<vector<DeleteCheckItemResponseBody::CheckItems>> checkItems_ {};
    // The ID of the current request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

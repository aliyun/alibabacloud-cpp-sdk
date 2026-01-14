// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FolderItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AddFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    AddFolderResponseBody() = default ;
    AddFolderResponseBody(const AddFolderResponseBody &) = default ;
    AddFolderResponseBody(AddFolderResponseBody &&) = default ;
    AddFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFolderResponseBody() = default ;
    AddFolderResponseBody& operator=(const AddFolderResponseBody &) = default ;
    AddFolderResponseBody& operator=(AddFolderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const FolderItem & getData() const { DARABONBA_PTR_GET_CONST(data_, FolderItem) };
    inline FolderItem getData() { DARABONBA_PTR_GET(data_, FolderItem) };
    inline AddFolderResponseBody& setData(const FolderItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddFolderResponseBody& setData(FolderItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<FolderItem> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif

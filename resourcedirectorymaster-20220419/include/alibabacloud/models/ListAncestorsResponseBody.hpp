// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANCESTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTANCESTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAncestorsResponseBodyFolders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAncestorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAncestorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folders, folders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAncestorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folders, folders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAncestorsResponseBody() = default ;
    ListAncestorsResponseBody(const ListAncestorsResponseBody &) = default ;
    ListAncestorsResponseBody(ListAncestorsResponseBody &&) = default ;
    ListAncestorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAncestorsResponseBody() = default ;
    ListAncestorsResponseBody& operator=(const ListAncestorsResponseBody &) = default ;
    ListAncestorsResponseBody& operator=(ListAncestorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folders_ == nullptr
        && return this->requestId_ == nullptr; };
    // folders Field Functions 
    bool hasFolders() const { return this->folders_ != nullptr;};
    void deleteFolders() { this->folders_ = nullptr;};
    inline const ListAncestorsResponseBodyFolders & folders() const { DARABONBA_PTR_GET_CONST(folders_, ListAncestorsResponseBodyFolders) };
    inline ListAncestorsResponseBodyFolders folders() { DARABONBA_PTR_GET(folders_, ListAncestorsResponseBodyFolders) };
    inline ListAncestorsResponseBody& setFolders(const ListAncestorsResponseBodyFolders & folders) { DARABONBA_PTR_SET_VALUE(folders_, folders) };
    inline ListAncestorsResponseBody& setFolders(ListAncestorsResponseBodyFolders && folders) { DARABONBA_PTR_SET_RVALUE(folders_, folders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAncestorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the folders.
    std::shared_ptr<ListAncestorsResponseBodyFolders> folders_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif

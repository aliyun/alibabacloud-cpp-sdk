// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListGroupDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(directories, directories_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(directories, directories_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListGroupDirectoriesResponseBody() = default ;
    ListGroupDirectoriesResponseBody(const ListGroupDirectoriesResponseBody &) = default ;
    ListGroupDirectoriesResponseBody(ListGroupDirectoriesResponseBody &&) = default ;
    ListGroupDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupDirectoriesResponseBody() = default ;
    ListGroupDirectoriesResponseBody& operator=(const ListGroupDirectoriesResponseBody &) = default ;
    ListGroupDirectoriesResponseBody& operator=(ListGroupDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Directories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Directories& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(directoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(parentDirectoryId, parentDirectoryId_);
        DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
      };
      friend void from_json(const Darabonba::Json& j, Directories& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(directoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(parentDirectoryId, parentDirectoryId_);
        DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
      };
      Directories() = default ;
      Directories(const Directories &) = default ;
      Directories(Directories &&) = default ;
      Directories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Directories() = default ;
      Directories& operator=(const Directories &) = default ;
      Directories& operator=(Directories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->directoryId_ == nullptr && this->directoryType_ == nullptr && this->name_ == nullptr && this->parentDirectoryId_ == nullptr && this->readOnly_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Directories& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Directories& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline string getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
      inline Directories& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Directories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentDirectoryId Field Functions 
      bool hasParentDirectoryId() const { return this->parentDirectoryId_ != nullptr;};
      void deleteParentDirectoryId() { this->parentDirectoryId_ = nullptr;};
      inline string getParentDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(parentDirectoryId_, "") };
      inline Directories& setParentDirectoryId(string parentDirectoryId) { DARABONBA_PTR_SET_VALUE(parentDirectoryId_, parentDirectoryId) };


      // readOnly Field Functions 
      bool hasReadOnly() const { return this->readOnly_ != nullptr;};
      void deleteReadOnly() { this->readOnly_ = nullptr;};
      inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
      inline Directories& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    protected:
      // The directory description.
      shared_ptr<string> description_ {};
      // The directory ID, including the query root itself and its descendants.
      shared_ptr<string> directoryId_ {};
      // The original directory type. The value is GROUP for physical directories in the space. Referenced directories retain their original type.
      shared_ptr<string> directoryType_ {};
      // The directory name.
      shared_ptr<string> name_ {};
      // The parent directory ID. This value is empty for the internal root of the space.
      shared_ptr<string> parentDirectoryId_ {};
      // Indicates whether the directory is a read-only referenced directory. A value of false still requires creator or administrator permissions to modify the directory. The internal root is always unmodifiable.
      shared_ptr<bool> readOnly_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->directories_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGroupDirectoriesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directories Field Functions 
    bool hasDirectories() const { return this->directories_ != nullptr;};
    void deleteDirectories() { this->directories_ = nullptr;};
    inline const vector<ListGroupDirectoriesResponseBody::Directories> & getDirectories() const { DARABONBA_PTR_GET_CONST(directories_, vector<ListGroupDirectoriesResponseBody::Directories>) };
    inline vector<ListGroupDirectoriesResponseBody::Directories> getDirectories() { DARABONBA_PTR_GET(directories_, vector<ListGroupDirectoriesResponseBody::Directories>) };
    inline ListGroupDirectoriesResponseBody& setDirectories(const vector<ListGroupDirectoriesResponseBody::Directories> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
    inline ListGroupDirectoriesResponseBody& setDirectories(vector<ListGroupDirectoriesResponseBody::Directories> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGroupDirectoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGroupDirectoriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The query root itself and all its descendant directories, including visible referenced directories in the space. The results are not paginated.
    shared_ptr<vector<ListGroupDirectoriesResponseBody::Directories>> directories_ {};
    // The error description.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The number of returned directories, which equals the length of the directories array.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

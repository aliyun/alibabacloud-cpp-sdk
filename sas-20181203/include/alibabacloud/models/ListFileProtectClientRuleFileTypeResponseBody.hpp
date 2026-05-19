// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTCLIENTRULEFILETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTCLIENTRULEFILETYPERESPONSEBODY_HPP_
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
  class ListFileProtectClientRuleFileTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectClientRuleFileTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileTypes, fileTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectClientRuleFileTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileTypes, fileTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFileProtectClientRuleFileTypeResponseBody() = default ;
    ListFileProtectClientRuleFileTypeResponseBody(const ListFileProtectClientRuleFileTypeResponseBody &) = default ;
    ListFileProtectClientRuleFileTypeResponseBody(ListFileProtectClientRuleFileTypeResponseBody &&) = default ;
    ListFileProtectClientRuleFileTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectClientRuleFileTypeResponseBody() = default ;
    ListFileProtectClientRuleFileTypeResponseBody& operator=(const ListFileProtectClientRuleFileTypeResponseBody &) = default ;
    ListFileProtectClientRuleFileTypeResponseBody& operator=(ListFileProtectClientRuleFileTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileTypes_ == nullptr
        && this->requestId_ == nullptr; };
    // fileTypes Field Functions 
    bool hasFileTypes() const { return this->fileTypes_ != nullptr;};
    void deleteFileTypes() { this->fileTypes_ = nullptr;};
    inline const vector<string> & getFileTypes() const { DARABONBA_PTR_GET_CONST(fileTypes_, vector<string>) };
    inline vector<string> getFileTypes() { DARABONBA_PTR_GET(fileTypes_, vector<string>) };
    inline ListFileProtectClientRuleFileTypeResponseBody& setFileTypes(const vector<string> & fileTypes) { DARABONBA_PTR_SET_VALUE(fileTypes_, fileTypes) };
    inline ListFileProtectClientRuleFileTypeResponseBody& setFileTypes(vector<string> && fileTypes) { DARABONBA_PTR_SET_RVALUE(fileTypes_, fileTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileProtectClientRuleFileTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> fileTypes_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

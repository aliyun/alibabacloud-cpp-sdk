// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDPISIGNATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDPISIGNATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListDpiSignaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDpiSignaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DpiSignature, dpiSignature_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDpiSignaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DpiSignature, dpiSignature_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDpiSignaturesResponseBody() = default ;
    ListDpiSignaturesResponseBody(const ListDpiSignaturesResponseBody &) = default ;
    ListDpiSignaturesResponseBody(ListDpiSignaturesResponseBody &&) = default ;
    ListDpiSignaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDpiSignaturesResponseBody() = default ;
    ListDpiSignaturesResponseBody& operator=(const ListDpiSignaturesResponseBody &) = default ;
    ListDpiSignaturesResponseBody& operator=(ListDpiSignaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DpiSignature : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DpiSignature& obj) { 
        DARABONBA_PTR_TO_JSON(DpiGroupId, dpiGroupId_);
        DARABONBA_PTR_TO_JSON(DpiSignatureId, dpiSignatureId_);
        DARABONBA_PTR_TO_JSON(DpiSignatureName, dpiSignatureName_);
        DARABONBA_PTR_TO_JSON(MinEngineVersion, minEngineVersion_);
        DARABONBA_PTR_TO_JSON(MinSignatureDbVersion, minSignatureDbVersion_);
      };
      friend void from_json(const Darabonba::Json& j, DpiSignature& obj) { 
        DARABONBA_PTR_FROM_JSON(DpiGroupId, dpiGroupId_);
        DARABONBA_PTR_FROM_JSON(DpiSignatureId, dpiSignatureId_);
        DARABONBA_PTR_FROM_JSON(DpiSignatureName, dpiSignatureName_);
        DARABONBA_PTR_FROM_JSON(MinEngineVersion, minEngineVersion_);
        DARABONBA_PTR_FROM_JSON(MinSignatureDbVersion, minSignatureDbVersion_);
      };
      DpiSignature() = default ;
      DpiSignature(const DpiSignature &) = default ;
      DpiSignature(DpiSignature &&) = default ;
      DpiSignature(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DpiSignature() = default ;
      DpiSignature& operator=(const DpiSignature &) = default ;
      DpiSignature& operator=(DpiSignature &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dpiGroupId_ == nullptr
        && this->dpiSignatureId_ == nullptr && this->dpiSignatureName_ == nullptr && this->minEngineVersion_ == nullptr && this->minSignatureDbVersion_ == nullptr; };
      // dpiGroupId Field Functions 
      bool hasDpiGroupId() const { return this->dpiGroupId_ != nullptr;};
      void deleteDpiGroupId() { this->dpiGroupId_ = nullptr;};
      inline string getDpiGroupId() const { DARABONBA_PTR_GET_DEFAULT(dpiGroupId_, "") };
      inline DpiSignature& setDpiGroupId(string dpiGroupId) { DARABONBA_PTR_SET_VALUE(dpiGroupId_, dpiGroupId) };


      // dpiSignatureId Field Functions 
      bool hasDpiSignatureId() const { return this->dpiSignatureId_ != nullptr;};
      void deleteDpiSignatureId() { this->dpiSignatureId_ = nullptr;};
      inline string getDpiSignatureId() const { DARABONBA_PTR_GET_DEFAULT(dpiSignatureId_, "") };
      inline DpiSignature& setDpiSignatureId(string dpiSignatureId) { DARABONBA_PTR_SET_VALUE(dpiSignatureId_, dpiSignatureId) };


      // dpiSignatureName Field Functions 
      bool hasDpiSignatureName() const { return this->dpiSignatureName_ != nullptr;};
      void deleteDpiSignatureName() { this->dpiSignatureName_ = nullptr;};
      inline string getDpiSignatureName() const { DARABONBA_PTR_GET_DEFAULT(dpiSignatureName_, "") };
      inline DpiSignature& setDpiSignatureName(string dpiSignatureName) { DARABONBA_PTR_SET_VALUE(dpiSignatureName_, dpiSignatureName) };


      // minEngineVersion Field Functions 
      bool hasMinEngineVersion() const { return this->minEngineVersion_ != nullptr;};
      void deleteMinEngineVersion() { this->minEngineVersion_ = nullptr;};
      inline string getMinEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(minEngineVersion_, "") };
      inline DpiSignature& setMinEngineVersion(string minEngineVersion) { DARABONBA_PTR_SET_VALUE(minEngineVersion_, minEngineVersion) };


      // minSignatureDbVersion Field Functions 
      bool hasMinSignatureDbVersion() const { return this->minSignatureDbVersion_ != nullptr;};
      void deleteMinSignatureDbVersion() { this->minSignatureDbVersion_ = nullptr;};
      inline string getMinSignatureDbVersion() const { DARABONBA_PTR_GET_DEFAULT(minSignatureDbVersion_, "") };
      inline DpiSignature& setMinSignatureDbVersion(string minSignatureDbVersion) { DARABONBA_PTR_SET_VALUE(minSignatureDbVersion_, minSignatureDbVersion) };


    protected:
      // The ID of the application group to which the application belongs.
      shared_ptr<string> dpiGroupId_ {};
      // The application ID.
      shared_ptr<string> dpiSignatureId_ {};
      // The application name.
      shared_ptr<string> dpiSignatureName_ {};
      // The minimum version of the deep packet inspection (DPI) engine that supports the application.
      shared_ptr<string> minEngineVersion_ {};
      // The minimum version of the signature library that supports the application.
      shared_ptr<string> minSignatureDbVersion_ {};
    };

    virtual bool empty() const override { return this->dpiSignature_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dpiSignature Field Functions 
    bool hasDpiSignature() const { return this->dpiSignature_ != nullptr;};
    void deleteDpiSignature() { this->dpiSignature_ = nullptr;};
    inline const vector<ListDpiSignaturesResponseBody::DpiSignature> & getDpiSignature() const { DARABONBA_PTR_GET_CONST(dpiSignature_, vector<ListDpiSignaturesResponseBody::DpiSignature>) };
    inline vector<ListDpiSignaturesResponseBody::DpiSignature> getDpiSignature() { DARABONBA_PTR_GET(dpiSignature_, vector<ListDpiSignaturesResponseBody::DpiSignature>) };
    inline ListDpiSignaturesResponseBody& setDpiSignature(const vector<ListDpiSignaturesResponseBody::DpiSignature> & dpiSignature) { DARABONBA_PTR_SET_VALUE(dpiSignature_, dpiSignature) };
    inline ListDpiSignaturesResponseBody& setDpiSignature(vector<ListDpiSignaturesResponseBody::DpiSignature> && dpiSignature) { DARABONBA_PTR_SET_RVALUE(dpiSignature_, dpiSignature) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDpiSignaturesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDpiSignaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDpiSignaturesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of applications.
    shared_ptr<vector<ListDpiSignaturesResponseBody::DpiSignature>> dpiSignature_ {};
    // The token for the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of applications returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif

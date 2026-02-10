// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTRESPONSEBODY_HPP_
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
  class DescribeFrontVulPatchListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFrontVulPatchListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FrontPatchList, frontPatchList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFrontVulPatchListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FrontPatchList, frontPatchList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFrontVulPatchListResponseBody() = default ;
    DescribeFrontVulPatchListResponseBody(const DescribeFrontVulPatchListResponseBody &) = default ;
    DescribeFrontVulPatchListResponseBody(DescribeFrontVulPatchListResponseBody &&) = default ;
    DescribeFrontVulPatchListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFrontVulPatchListResponseBody() = default ;
    DescribeFrontVulPatchListResponseBody& operator=(const DescribeFrontVulPatchListResponseBody &) = default ;
    DescribeFrontVulPatchListResponseBody& operator=(DescribeFrontVulPatchListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FrontPatchList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FrontPatchList& obj) { 
        DARABONBA_PTR_TO_JSON(PatchList, patchList_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, FrontPatchList& obj) { 
        DARABONBA_PTR_FROM_JSON(PatchList, patchList_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      FrontPatchList() = default ;
      FrontPatchList(const FrontPatchList &) = default ;
      FrontPatchList(FrontPatchList &&) = default ;
      FrontPatchList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FrontPatchList() = default ;
      FrontPatchList& operator=(const FrontPatchList &) = default ;
      FrontPatchList& operator=(FrontPatchList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PatchList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PatchList& obj) { 
          DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, PatchList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        PatchList() = default ;
        PatchList(const PatchList &) = default ;
        PatchList(PatchList &&) = default ;
        PatchList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PatchList() = default ;
        PatchList& operator=(const PatchList &) = default ;
        PatchList& operator=(PatchList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->name_ == nullptr; };
        // aliasName Field Functions 
        bool hasAliasName() const { return this->aliasName_ != nullptr;};
        void deleteAliasName() { this->aliasName_ = nullptr;};
        inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
        inline PatchList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PatchList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The name of the vulnerability.
        shared_ptr<string> aliasName_ {};
        // The version number of the pre-patch that is required to fix the Windows system vulnerability.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->patchList_ == nullptr
        && this->uuid_ == nullptr; };
      // patchList Field Functions 
      bool hasPatchList() const { return this->patchList_ != nullptr;};
      void deletePatchList() { this->patchList_ = nullptr;};
      inline const vector<FrontPatchList::PatchList> & getPatchList() const { DARABONBA_PTR_GET_CONST(patchList_, vector<FrontPatchList::PatchList>) };
      inline vector<FrontPatchList::PatchList> getPatchList() { DARABONBA_PTR_GET(patchList_, vector<FrontPatchList::PatchList>) };
      inline FrontPatchList& setPatchList(const vector<FrontPatchList::PatchList> & patchList) { DARABONBA_PTR_SET_VALUE(patchList_, patchList) };
      inline FrontPatchList& setPatchList(vector<FrontPatchList::PatchList> && patchList) { DARABONBA_PTR_SET_RVALUE(patchList_, patchList) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline FrontPatchList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // An array consisting of the pre-patches that are required to fix the specified Windows system vulnerability on the server.
      shared_ptr<vector<FrontPatchList::PatchList>> patchList_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->frontPatchList_ == nullptr
        && this->requestId_ == nullptr; };
    // frontPatchList Field Functions 
    bool hasFrontPatchList() const { return this->frontPatchList_ != nullptr;};
    void deleteFrontPatchList() { this->frontPatchList_ = nullptr;};
    inline const vector<DescribeFrontVulPatchListResponseBody::FrontPatchList> & getFrontPatchList() const { DARABONBA_PTR_GET_CONST(frontPatchList_, vector<DescribeFrontVulPatchListResponseBody::FrontPatchList>) };
    inline vector<DescribeFrontVulPatchListResponseBody::FrontPatchList> getFrontPatchList() { DARABONBA_PTR_GET(frontPatchList_, vector<DescribeFrontVulPatchListResponseBody::FrontPatchList>) };
    inline DescribeFrontVulPatchListResponseBody& setFrontPatchList(const vector<DescribeFrontVulPatchListResponseBody::FrontPatchList> & frontPatchList) { DARABONBA_PTR_SET_VALUE(frontPatchList_, frontPatchList) };
    inline DescribeFrontVulPatchListResponseBody& setFrontPatchList(vector<DescribeFrontVulPatchListResponseBody::FrontPatchList> && frontPatchList) { DARABONBA_PTR_SET_RVALUE(frontPatchList_, frontPatchList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFrontVulPatchListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the information about the pre-patches that are required to fix the specified Windows system vulnerability.
    shared_ptr<vector<DescribeFrontVulPatchListResponseBody::FrontPatchList>> frontPatchList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

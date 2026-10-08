// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORYDEPLOYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORYDEPLOYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListHistoryDeployVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoryDeployVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PackageVersionList, packageVersionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoryDeployVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PackageVersionList, packageVersionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHistoryDeployVersionResponseBody() = default ;
    ListHistoryDeployVersionResponseBody(const ListHistoryDeployVersionResponseBody &) = default ;
    ListHistoryDeployVersionResponseBody(ListHistoryDeployVersionResponseBody &&) = default ;
    ListHistoryDeployVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoryDeployVersionResponseBody() = default ;
    ListHistoryDeployVersionResponseBody& operator=(const ListHistoryDeployVersionResponseBody &) = default ;
    ListHistoryDeployVersionResponseBody& operator=(ListHistoryDeployVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PackageVersionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PackageVersionList& obj) { 
        DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      };
      friend void from_json(const Darabonba::Json& j, PackageVersionList& obj) { 
        DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      };
      PackageVersionList() = default ;
      PackageVersionList(const PackageVersionList &) = default ;
      PackageVersionList(PackageVersionList &&) = default ;
      PackageVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PackageVersionList() = default ;
      PackageVersionList& operator=(const PackageVersionList &) = default ;
      PackageVersionList& operator=(PackageVersionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PackageVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PackageVersion& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(WarUrl, warUrl_);
        };
        friend void from_json(const Darabonba::Json& j, PackageVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(WarUrl, warUrl_);
        };
        PackageVersion() = default ;
        PackageVersion(const PackageVersion &) = default ;
        PackageVersion(PackageVersion &&) = default ;
        PackageVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PackageVersion() = default ;
        PackageVersion& operator=(const PackageVersion &) = default ;
        PackageVersion& operator=(PackageVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->packageVersion_ == nullptr && this->publicUrl_ == nullptr
        && this->type_ == nullptr && this->updateTime_ == nullptr && this->warUrl_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline PackageVersion& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline PackageVersion& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PackageVersion& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline PackageVersion& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // packageVersion Field Functions 
        bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
        void deletePackageVersion() { this->packageVersion_ = nullptr;};
        inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
        inline PackageVersion& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


        // publicUrl Field Functions 
        bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
        void deletePublicUrl() { this->publicUrl_ = nullptr;};
        inline string getPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
        inline PackageVersion& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline PackageVersion& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline PackageVersion& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // warUrl Field Functions 
        bool hasWarUrl() const { return this->warUrl_ != nullptr;};
        void deleteWarUrl() { this->warUrl_ = nullptr;};
        inline string getWarUrl() const { DARABONBA_PTR_GET_DEFAULT(warUrl_, "") };
        inline PackageVersion& setWarUrl(string warUrl) { DARABONBA_PTR_SET_VALUE(warUrl_, warUrl) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> packageVersion_ {};
        shared_ptr<string> publicUrl_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> warUrl_ {};
      };

      virtual bool empty() const override { return this->packageVersion_ == nullptr; };
      // packageVersion Field Functions 
      bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
      void deletePackageVersion() { this->packageVersion_ = nullptr;};
      inline const vector<PackageVersionList::PackageVersion> & getPackageVersion() const { DARABONBA_PTR_GET_CONST(packageVersion_, vector<PackageVersionList::PackageVersion>) };
      inline vector<PackageVersionList::PackageVersion> getPackageVersion() { DARABONBA_PTR_GET(packageVersion_, vector<PackageVersionList::PackageVersion>) };
      inline PackageVersionList& setPackageVersion(const vector<PackageVersionList::PackageVersion> & packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };
      inline PackageVersionList& setPackageVersion(vector<PackageVersionList::PackageVersion> && packageVersion) { DARABONBA_PTR_SET_RVALUE(packageVersion_, packageVersion) };


    protected:
      shared_ptr<vector<PackageVersionList::PackageVersion>> packageVersion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->packageVersionList_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListHistoryDeployVersionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHistoryDeployVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // packageVersionList Field Functions 
    bool hasPackageVersionList() const { return this->packageVersionList_ != nullptr;};
    void deletePackageVersionList() { this->packageVersionList_ = nullptr;};
    inline const ListHistoryDeployVersionResponseBody::PackageVersionList & getPackageVersionList() const { DARABONBA_PTR_GET_CONST(packageVersionList_, ListHistoryDeployVersionResponseBody::PackageVersionList) };
    inline ListHistoryDeployVersionResponseBody::PackageVersionList getPackageVersionList() { DARABONBA_PTR_GET(packageVersionList_, ListHistoryDeployVersionResponseBody::PackageVersionList) };
    inline ListHistoryDeployVersionResponseBody& setPackageVersionList(const ListHistoryDeployVersionResponseBody::PackageVersionList & packageVersionList) { DARABONBA_PTR_SET_VALUE(packageVersionList_, packageVersionList) };
    inline ListHistoryDeployVersionResponseBody& setPackageVersionList(ListHistoryDeployVersionResponseBody::PackageVersionList && packageVersionList) { DARABONBA_PTR_SET_RVALUE(packageVersionList_, packageVersionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHistoryDeployVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    shared_ptr<ListHistoryDeployVersionResponseBody::PackageVersionList> packageVersionList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

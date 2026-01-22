// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALIASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYALIASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryAliasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAliasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliasInfos, aliasInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAliasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasInfos, aliasInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAliasesResponseBody() = default ;
    QueryAliasesResponseBody(const QueryAliasesResponseBody &) = default ;
    QueryAliasesResponseBody(QueryAliasesResponseBody &&) = default ;
    QueryAliasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAliasesResponseBody() = default ;
    QueryAliasesResponseBody& operator=(const QueryAliasesResponseBody &) = default ;
    QueryAliasesResponseBody& operator=(QueryAliasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AliasInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AliasInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AliasInfo, aliasInfo_);
      };
      friend void from_json(const Darabonba::Json& j, AliasInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasInfo, aliasInfo_);
      };
      AliasInfos() = default ;
      AliasInfos(const AliasInfos &) = default ;
      AliasInfos(AliasInfos &&) = default ;
      AliasInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AliasInfos() = default ;
      AliasInfos& operator=(const AliasInfos &) = default ;
      AliasInfos& operator=(AliasInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AliasInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AliasInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        };
        friend void from_json(const Darabonba::Json& j, AliasInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        };
        AliasInfo() = default ;
        AliasInfo(const AliasInfo &) = default ;
        AliasInfo(AliasInfo &&) = default ;
        AliasInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AliasInfo() = default ;
        AliasInfo& operator=(const AliasInfo &) = default ;
        AliasInfo& operator=(AliasInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliasName_ == nullptr; };
        // aliasName Field Functions 
        bool hasAliasName() const { return this->aliasName_ != nullptr;};
        void deleteAliasName() { this->aliasName_ = nullptr;};
        inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
        inline AliasInfo& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      protected:
        shared_ptr<string> aliasName_ {};
      };

      virtual bool empty() const override { return this->aliasInfo_ == nullptr; };
      // aliasInfo Field Functions 
      bool hasAliasInfo() const { return this->aliasInfo_ != nullptr;};
      void deleteAliasInfo() { this->aliasInfo_ = nullptr;};
      inline const vector<AliasInfos::AliasInfo> & getAliasInfo() const { DARABONBA_PTR_GET_CONST(aliasInfo_, vector<AliasInfos::AliasInfo>) };
      inline vector<AliasInfos::AliasInfo> getAliasInfo() { DARABONBA_PTR_GET(aliasInfo_, vector<AliasInfos::AliasInfo>) };
      inline AliasInfos& setAliasInfo(const vector<AliasInfos::AliasInfo> & aliasInfo) { DARABONBA_PTR_SET_VALUE(aliasInfo_, aliasInfo) };
      inline AliasInfos& setAliasInfo(vector<AliasInfos::AliasInfo> && aliasInfo) { DARABONBA_PTR_SET_RVALUE(aliasInfo_, aliasInfo) };


    protected:
      shared_ptr<vector<AliasInfos::AliasInfo>> aliasInfo_ {};
    };

    virtual bool empty() const override { return this->aliasInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // aliasInfos Field Functions 
    bool hasAliasInfos() const { return this->aliasInfos_ != nullptr;};
    void deleteAliasInfos() { this->aliasInfos_ = nullptr;};
    inline const QueryAliasesResponseBody::AliasInfos & getAliasInfos() const { DARABONBA_PTR_GET_CONST(aliasInfos_, QueryAliasesResponseBody::AliasInfos) };
    inline QueryAliasesResponseBody::AliasInfos getAliasInfos() { DARABONBA_PTR_GET(aliasInfos_, QueryAliasesResponseBody::AliasInfos) };
    inline QueryAliasesResponseBody& setAliasInfos(const QueryAliasesResponseBody::AliasInfos & aliasInfos) { DARABONBA_PTR_SET_VALUE(aliasInfos_, aliasInfos) };
    inline QueryAliasesResponseBody& setAliasInfos(QueryAliasesResponseBody::AliasInfos && aliasInfos) { DARABONBA_PTR_SET_RVALUE(aliasInfos_, aliasInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAliasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryAliasesResponseBody::AliasInfos> aliasInfos_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif

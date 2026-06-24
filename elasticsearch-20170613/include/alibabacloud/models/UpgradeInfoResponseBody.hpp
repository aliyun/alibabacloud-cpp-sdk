// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpgradeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpgradeInfoResponseBody() = default ;
    UpgradeInfoResponseBody(const UpgradeInfoResponseBody &) = default ;
    UpgradeInfoResponseBody(UpgradeInfoResponseBody &&) = default ;
    UpgradeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeInfoResponseBody() = default ;
    UpgradeInfoResponseBody& operator=(const UpgradeInfoResponseBody &) = default ;
    UpgradeInfoResponseBody& operator=(UpgradeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(UpgradeInfo, upgradeInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(UpgradeInfo, upgradeInfo_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpgradeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpgradeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurRepoVersion, curRepoVersion_);
          DARABONBA_PTR_TO_JSON(UpdateRepoVersion, updateRepoVersion_);
          DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
          DARABONBA_PTR_TO_JSON(curApackVersion, curApackVersion_);
          DARABONBA_PTR_TO_JSON(curEsVersion, curEsVersion_);
          DARABONBA_PTR_TO_JSON(upgradeApackVersion, upgradeApackVersion_);
          DARABONBA_PTR_TO_JSON(upgradeEsVersion, upgradeEsVersion_);
        };
        friend void from_json(const Darabonba::Json& j, UpgradeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurRepoVersion, curRepoVersion_);
          DARABONBA_PTR_FROM_JSON(UpdateRepoVersion, updateRepoVersion_);
          DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
          DARABONBA_PTR_FROM_JSON(curApackVersion, curApackVersion_);
          DARABONBA_PTR_FROM_JSON(curEsVersion, curEsVersion_);
          DARABONBA_PTR_FROM_JSON(upgradeApackVersion, upgradeApackVersion_);
          DARABONBA_PTR_FROM_JSON(upgradeEsVersion, upgradeEsVersion_);
        };
        UpgradeInfo() = default ;
        UpgradeInfo(const UpgradeInfo &) = default ;
        UpgradeInfo(UpgradeInfo &&) = default ;
        UpgradeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpgradeInfo() = default ;
        UpgradeInfo& operator=(const UpgradeInfo &) = default ;
        UpgradeInfo& operator=(UpgradeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->curRepoVersion_ == nullptr
        && this->updateRepoVersion_ == nullptr && this->upgrade_ == nullptr && this->curApackVersion_ == nullptr && this->curEsVersion_ == nullptr && this->upgradeApackVersion_ == nullptr
        && this->upgradeEsVersion_ == nullptr; };
        // curRepoVersion Field Functions 
        bool hasCurRepoVersion() const { return this->curRepoVersion_ != nullptr;};
        void deleteCurRepoVersion() { this->curRepoVersion_ = nullptr;};
        inline string getCurRepoVersion() const { DARABONBA_PTR_GET_DEFAULT(curRepoVersion_, "") };
        inline UpgradeInfo& setCurRepoVersion(string curRepoVersion) { DARABONBA_PTR_SET_VALUE(curRepoVersion_, curRepoVersion) };


        // updateRepoVersion Field Functions 
        bool hasUpdateRepoVersion() const { return this->updateRepoVersion_ != nullptr;};
        void deleteUpdateRepoVersion() { this->updateRepoVersion_ = nullptr;};
        inline string getUpdateRepoVersion() const { DARABONBA_PTR_GET_DEFAULT(updateRepoVersion_, "") };
        inline UpgradeInfo& setUpdateRepoVersion(string updateRepoVersion) { DARABONBA_PTR_SET_VALUE(updateRepoVersion_, updateRepoVersion) };


        // upgrade Field Functions 
        bool hasUpgrade() const { return this->upgrade_ != nullptr;};
        void deleteUpgrade() { this->upgrade_ = nullptr;};
        inline bool getUpgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
        inline UpgradeInfo& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


        // curApackVersion Field Functions 
        bool hasCurApackVersion() const { return this->curApackVersion_ != nullptr;};
        void deleteCurApackVersion() { this->curApackVersion_ = nullptr;};
        inline string getCurApackVersion() const { DARABONBA_PTR_GET_DEFAULT(curApackVersion_, "") };
        inline UpgradeInfo& setCurApackVersion(string curApackVersion) { DARABONBA_PTR_SET_VALUE(curApackVersion_, curApackVersion) };


        // curEsVersion Field Functions 
        bool hasCurEsVersion() const { return this->curEsVersion_ != nullptr;};
        void deleteCurEsVersion() { this->curEsVersion_ = nullptr;};
        inline string getCurEsVersion() const { DARABONBA_PTR_GET_DEFAULT(curEsVersion_, "") };
        inline UpgradeInfo& setCurEsVersion(string curEsVersion) { DARABONBA_PTR_SET_VALUE(curEsVersion_, curEsVersion) };


        // upgradeApackVersion Field Functions 
        bool hasUpgradeApackVersion() const { return this->upgradeApackVersion_ != nullptr;};
        void deleteUpgradeApackVersion() { this->upgradeApackVersion_ = nullptr;};
        inline string getUpgradeApackVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeApackVersion_, "") };
        inline UpgradeInfo& setUpgradeApackVersion(string upgradeApackVersion) { DARABONBA_PTR_SET_VALUE(upgradeApackVersion_, upgradeApackVersion) };


        // upgradeEsVersion Field Functions 
        bool hasUpgradeEsVersion() const { return this->upgradeEsVersion_ != nullptr;};
        void deleteUpgradeEsVersion() { this->upgradeEsVersion_ = nullptr;};
        inline string getUpgradeEsVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeEsVersion_, "") };
        inline UpgradeInfo& setUpgradeEsVersion(string upgradeEsVersion) { DARABONBA_PTR_SET_VALUE(upgradeEsVersion_, upgradeEsVersion) };


      protected:
        // Current repo version.
        shared_ptr<string> curRepoVersion_ {};
        // Upgradable repo version.
        shared_ptr<string> updateRepoVersion_ {};
        // Indicates whether an upgradable version exists.
        shared_ptr<bool> upgrade_ {};
        // Current Milvus version
        shared_ptr<string> curApackVersion_ {};
        // Current ES version
        shared_ptr<string> curEsVersion_ {};
        // Upgradable Milvus version.
        shared_ptr<string> upgradeApackVersion_ {};
        // Upgradable ES version
        shared_ptr<string> upgradeEsVersion_ {};
      };

      virtual bool empty() const override { return this->upgradeInfo_ == nullptr; };
      // upgradeInfo Field Functions 
      bool hasUpgradeInfo() const { return this->upgradeInfo_ != nullptr;};
      void deleteUpgradeInfo() { this->upgradeInfo_ = nullptr;};
      inline const Result::UpgradeInfo & getUpgradeInfo() const { DARABONBA_PTR_GET_CONST(upgradeInfo_, Result::UpgradeInfo) };
      inline Result::UpgradeInfo getUpgradeInfo() { DARABONBA_PTR_GET(upgradeInfo_, Result::UpgradeInfo) };
      inline Result& setUpgradeInfo(const Result::UpgradeInfo & upgradeInfo) { DARABONBA_PTR_SET_VALUE(upgradeInfo_, upgradeInfo) };
      inline Result& setUpgradeInfo(Result::UpgradeInfo && upgradeInfo) { DARABONBA_PTR_SET_RVALUE(upgradeInfo_, upgradeInfo) };


    protected:
      // Upgrade information.
      shared_ptr<Result::UpgradeInfo> upgradeInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpgradeInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpgradeInfoResponseBody::Result) };
    inline UpgradeInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpgradeInfoResponseBody::Result) };
    inline UpgradeInfoResponseBody& setResult(const UpgradeInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpgradeInfoResponseBody& setResult(UpgradeInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Result body
    shared_ptr<UpgradeInfoResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

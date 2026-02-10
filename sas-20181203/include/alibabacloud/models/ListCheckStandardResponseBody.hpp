// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKSTANDARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKSTANDARDRESPONSEBODY_HPP_
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
  class ListCheckStandardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckStandardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Standards, standards_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckStandardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Standards, standards_);
    };
    ListCheckStandardResponseBody() = default ;
    ListCheckStandardResponseBody(const ListCheckStandardResponseBody &) = default ;
    ListCheckStandardResponseBody(ListCheckStandardResponseBody &&) = default ;
    ListCheckStandardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckStandardResponseBody() = default ;
    ListCheckStandardResponseBody& operator=(const ListCheckStandardResponseBody &) = default ;
    ListCheckStandardResponseBody& operator=(ListCheckStandardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Standards : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Standards& obj) { 
        DARABONBA_PTR_TO_JSON(BindVendor, bindVendor_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Requirements, requirements_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
        DARABONBA_PTR_TO_JSON(ShowPriorityLevel, showPriorityLevel_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Standards& obj) { 
        DARABONBA_PTR_FROM_JSON(BindVendor, bindVendor_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Requirements, requirements_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
        DARABONBA_PTR_FROM_JSON(ShowPriorityLevel, showPriorityLevel_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Standards() = default ;
      Standards(const Standards &) = default ;
      Standards(Standards &&) = default ;
      Standards(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Standards() = default ;
      Standards& operator=(const Standards &) = default ;
      Standards& operator=(Standards &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Requirements : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Requirements& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RiskCheckCount, riskCheckCount_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(ShowPriorityLevel, showPriorityLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Requirements& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RiskCheckCount, riskCheckCount_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(ShowPriorityLevel, showPriorityLevel_);
        };
        Requirements() = default ;
        Requirements(const Requirements &) = default ;
        Requirements(Requirements &&) = default ;
        Requirements(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Requirements() = default ;
        Requirements& operator=(const Requirements &) = default ;
        Requirements& operator=(Requirements &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->riskCheckCount_ == nullptr && this->showName_ == nullptr && this->showPriorityLevel_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Requirements& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // riskCheckCount Field Functions 
        bool hasRiskCheckCount() const { return this->riskCheckCount_ != nullptr;};
        void deleteRiskCheckCount() { this->riskCheckCount_ = nullptr;};
        inline int64_t getRiskCheckCount() const { DARABONBA_PTR_GET_DEFAULT(riskCheckCount_, 0L) };
        inline Requirements& setRiskCheckCount(int64_t riskCheckCount) { DARABONBA_PTR_SET_VALUE(riskCheckCount_, riskCheckCount) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline Requirements& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // showPriorityLevel Field Functions 
        bool hasShowPriorityLevel() const { return this->showPriorityLevel_ != nullptr;};
        void deleteShowPriorityLevel() { this->showPriorityLevel_ = nullptr;};
        inline int32_t getShowPriorityLevel() const { DARABONBA_PTR_GET_DEFAULT(showPriorityLevel_, 0) };
        inline Requirements& setShowPriorityLevel(int32_t showPriorityLevel) { DARABONBA_PTR_SET_VALUE(showPriorityLevel_, showPriorityLevel) };


      protected:
        // The ID of the requirement.
        shared_ptr<int64_t> id_ {};
        // The number of check items in the requirement.
        shared_ptr<int64_t> riskCheckCount_ {};
        // The display name of the search condition.
        shared_ptr<string> showName_ {};
        // The priority for display.
        shared_ptr<int32_t> showPriorityLevel_ {};
      };

      virtual bool empty() const override { return this->bindVendor_ == nullptr
        && this->id_ == nullptr && this->requirements_ == nullptr && this->showName_ == nullptr && this->showPriorityLevel_ == nullptr && this->type_ == nullptr; };
      // bindVendor Field Functions 
      bool hasBindVendor() const { return this->bindVendor_ != nullptr;};
      void deleteBindVendor() { this->bindVendor_ = nullptr;};
      inline int32_t getBindVendor() const { DARABONBA_PTR_GET_DEFAULT(bindVendor_, 0) };
      inline Standards& setBindVendor(int32_t bindVendor) { DARABONBA_PTR_SET_VALUE(bindVendor_, bindVendor) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Standards& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // requirements Field Functions 
      bool hasRequirements() const { return this->requirements_ != nullptr;};
      void deleteRequirements() { this->requirements_ = nullptr;};
      inline const vector<Standards::Requirements> & getRequirements() const { DARABONBA_PTR_GET_CONST(requirements_, vector<Standards::Requirements>) };
      inline vector<Standards::Requirements> getRequirements() { DARABONBA_PTR_GET(requirements_, vector<Standards::Requirements>) };
      inline Standards& setRequirements(const vector<Standards::Requirements> & requirements) { DARABONBA_PTR_SET_VALUE(requirements_, requirements) };
      inline Standards& setRequirements(vector<Standards::Requirements> && requirements) { DARABONBA_PTR_SET_RVALUE(requirements_, requirements) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Standards& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // showPriorityLevel Field Functions 
      bool hasShowPriorityLevel() const { return this->showPriorityLevel_ != nullptr;};
      void deleteShowPriorityLevel() { this->showPriorityLevel_ = nullptr;};
      inline int32_t getShowPriorityLevel() const { DARABONBA_PTR_GET_DEFAULT(showPriorityLevel_, 0) };
      inline Standards& setShowPriorityLevel(int32_t showPriorityLevel) { DARABONBA_PTR_SET_VALUE(showPriorityLevel_, showPriorityLevel) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Standards& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The cloud service provider that uses the standard. Valid values:
      // 
      // *   **0**: Alibaba Cloud.
      // *   **3**: Tencent Cloud.
      // *   **4**: Huawei Cloud.
      // *   **5**: Microsoft Azure.
      // *   **7**: AWS.
      shared_ptr<int32_t> bindVendor_ {};
      // The ID of the standard.
      shared_ptr<int64_t> id_ {};
      // The requirements.
      shared_ptr<vector<Standards::Requirements>> requirements_ {};
      // The display name of the check item.
      shared_ptr<string> showName_ {};
      // The priority for display.
      shared_ptr<int32_t> showPriorityLevel_ {};
      // The type of the standard.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->standards_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckStandardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standards Field Functions 
    bool hasStandards() const { return this->standards_ != nullptr;};
    void deleteStandards() { this->standards_ = nullptr;};
    inline const vector<ListCheckStandardResponseBody::Standards> & getStandards() const { DARABONBA_PTR_GET_CONST(standards_, vector<ListCheckStandardResponseBody::Standards>) };
    inline vector<ListCheckStandardResponseBody::Standards> getStandards() { DARABONBA_PTR_GET(standards_, vector<ListCheckStandardResponseBody::Standards>) };
    inline ListCheckStandardResponseBody& setStandards(const vector<ListCheckStandardResponseBody::Standards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
    inline ListCheckStandardResponseBody& setStandards(vector<ListCheckStandardResponseBody::Standards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The standards.
    shared_ptr<vector<ListCheckStandardResponseBody::Standards>> standards_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

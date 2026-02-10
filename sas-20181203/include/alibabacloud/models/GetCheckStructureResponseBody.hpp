// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODY_HPP_
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
  class GetCheckStructureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckStructureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckStructureResponse, checkStructureResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckStructureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckStructureResponse, checkStructureResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCheckStructureResponseBody() = default ;
    GetCheckStructureResponseBody(const GetCheckStructureResponseBody &) = default ;
    GetCheckStructureResponseBody(GetCheckStructureResponseBody &&) = default ;
    GetCheckStructureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckStructureResponseBody() = default ;
    GetCheckStructureResponseBody& operator=(const GetCheckStructureResponseBody &) = default ;
    GetCheckStructureResponseBody& operator=(GetCheckStructureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckStructureResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckStructureResponse& obj) { 
        DARABONBA_PTR_TO_JSON(StandardType, standardType_);
        DARABONBA_PTR_TO_JSON(Standards, standards_);
      };
      friend void from_json(const Darabonba::Json& j, CheckStructureResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(StandardType, standardType_);
        DARABONBA_PTR_FROM_JSON(Standards, standards_);
      };
      CheckStructureResponse() = default ;
      CheckStructureResponse(const CheckStructureResponse &) = default ;
      CheckStructureResponse(CheckStructureResponse &&) = default ;
      CheckStructureResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckStructureResponse() = default ;
      CheckStructureResponse& operator=(const CheckStructureResponse &) = default ;
      CheckStructureResponse& operator=(CheckStructureResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Standards : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Standards& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Requirements, requirements_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Standards& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Requirements, requirements_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
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
            DARABONBA_PTR_TO_JSON(Sections, sections_);
            DARABONBA_PTR_TO_JSON(ShowName, showName_);
            DARABONBA_PTR_TO_JSON(TotalCheckCount, totalCheckCount_);
          };
          friend void from_json(const Darabonba::Json& j, Requirements& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Sections, sections_);
            DARABONBA_PTR_FROM_JSON(ShowName, showName_);
            DARABONBA_PTR_FROM_JSON(TotalCheckCount, totalCheckCount_);
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
          class Sections : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Sections& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(ShowName, showName_);
            };
            friend void from_json(const Darabonba::Json& j, Sections& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(ShowName, showName_);
            };
            Sections() = default ;
            Sections(const Sections &) = default ;
            Sections(Sections &&) = default ;
            Sections(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Sections() = default ;
            Sections& operator=(const Sections &) = default ;
            Sections& operator=(Sections &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->id_ == nullptr
        && this->showName_ == nullptr; };
            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline Sections& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // showName Field Functions 
            bool hasShowName() const { return this->showName_ != nullptr;};
            void deleteShowName() { this->showName_ = nullptr;};
            inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
            inline Sections& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


          protected:
            // The ID of the section for the check item.
            shared_ptr<int64_t> id_ {};
            // The display name of the section for the check item.
            shared_ptr<string> showName_ {};
          };

          virtual bool empty() const override { return this->id_ == nullptr
        && this->sections_ == nullptr && this->showName_ == nullptr && this->totalCheckCount_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Requirements& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // sections Field Functions 
          bool hasSections() const { return this->sections_ != nullptr;};
          void deleteSections() { this->sections_ = nullptr;};
          inline const vector<Requirements::Sections> & getSections() const { DARABONBA_PTR_GET_CONST(sections_, vector<Requirements::Sections>) };
          inline vector<Requirements::Sections> getSections() { DARABONBA_PTR_GET(sections_, vector<Requirements::Sections>) };
          inline Requirements& setSections(const vector<Requirements::Sections> & sections) { DARABONBA_PTR_SET_VALUE(sections_, sections) };
          inline Requirements& setSections(vector<Requirements::Sections> && sections) { DARABONBA_PTR_SET_RVALUE(sections_, sections) };


          // showName Field Functions 
          bool hasShowName() const { return this->showName_ != nullptr;};
          void deleteShowName() { this->showName_ = nullptr;};
          inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
          inline Requirements& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


          // totalCheckCount Field Functions 
          bool hasTotalCheckCount() const { return this->totalCheckCount_ != nullptr;};
          void deleteTotalCheckCount() { this->totalCheckCount_ = nullptr;};
          inline int32_t getTotalCheckCount() const { DARABONBA_PTR_GET_DEFAULT(totalCheckCount_, 0) };
          inline Requirements& setTotalCheckCount(int32_t totalCheckCount) { DARABONBA_PTR_SET_VALUE(totalCheckCount_, totalCheckCount) };


        protected:
          // The ID of the requirement item for the check item.
          shared_ptr<int64_t> id_ {};
          // The information about the sections of check items.
          shared_ptr<vector<Requirements::Sections>> sections_ {};
          // The display name of the requirement item for the check item.
          shared_ptr<string> showName_ {};
          // The total number of check items for the requirement.
          shared_ptr<int32_t> totalCheckCount_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->requirements_ == nullptr && this->showName_ == nullptr && this->type_ == nullptr; };
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


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Standards& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The standard ID of the check item.
        shared_ptr<int64_t> id_ {};
        // The standards of the check items.
        shared_ptr<vector<Standards::Requirements>> requirements_ {};
        // The display name of the standard for the check item.
        shared_ptr<string> showName_ {};
        // The standard type of the check item. Valid values:
        // 
        // *   RISK: security risk.
        // *   IDENTITY_PERMISSION: CIEM.
        // *   COMPLIANCE: security compliance.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->standardType_ == nullptr
        && this->standards_ == nullptr; };
      // standardType Field Functions 
      bool hasStandardType() const { return this->standardType_ != nullptr;};
      void deleteStandardType() { this->standardType_ = nullptr;};
      inline string getStandardType() const { DARABONBA_PTR_GET_DEFAULT(standardType_, "") };
      inline CheckStructureResponse& setStandardType(string standardType) { DARABONBA_PTR_SET_VALUE(standardType_, standardType) };


      // standards Field Functions 
      bool hasStandards() const { return this->standards_ != nullptr;};
      void deleteStandards() { this->standards_ = nullptr;};
      inline const vector<CheckStructureResponse::Standards> & getStandards() const { DARABONBA_PTR_GET_CONST(standards_, vector<CheckStructureResponse::Standards>) };
      inline vector<CheckStructureResponse::Standards> getStandards() { DARABONBA_PTR_GET(standards_, vector<CheckStructureResponse::Standards>) };
      inline CheckStructureResponse& setStandards(const vector<CheckStructureResponse::Standards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
      inline CheckStructureResponse& setStandards(vector<CheckStructureResponse::Standards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


    protected:
      // The type of the check item.
      // 
      // *   RISK: security risk.
      // *   IDENTITY_PERMISSION: Cloud Infrastructure Entitlement Management (CIEM).
      // *   COMPLIANCE: security compliance.
      shared_ptr<string> standardType_ {};
      // The structure information about the check items of the business type.
      shared_ptr<vector<CheckStructureResponse::Standards>> standards_ {};
    };

    virtual bool empty() const override { return this->checkStructureResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // checkStructureResponse Field Functions 
    bool hasCheckStructureResponse() const { return this->checkStructureResponse_ != nullptr;};
    void deleteCheckStructureResponse() { this->checkStructureResponse_ = nullptr;};
    inline const vector<GetCheckStructureResponseBody::CheckStructureResponse> & getCheckStructureResponse() const { DARABONBA_PTR_GET_CONST(checkStructureResponse_, vector<GetCheckStructureResponseBody::CheckStructureResponse>) };
    inline vector<GetCheckStructureResponseBody::CheckStructureResponse> getCheckStructureResponse() { DARABONBA_PTR_GET(checkStructureResponse_, vector<GetCheckStructureResponseBody::CheckStructureResponse>) };
    inline GetCheckStructureResponseBody& setCheckStructureResponse(const vector<GetCheckStructureResponseBody::CheckStructureResponse> & checkStructureResponse) { DARABONBA_PTR_SET_VALUE(checkStructureResponse_, checkStructureResponse) };
    inline GetCheckStructureResponseBody& setCheckStructureResponse(vector<GetCheckStructureResponseBody::CheckStructureResponse> && checkStructureResponse) { DARABONBA_PTR_SET_RVALUE(checkStructureResponse_, checkStructureResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckStructureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The structure information about check items provided by the configuration assessment feature.
    shared_ptr<vector<GetCheckStructureResponseBody::CheckStructureResponse>> checkStructureResponse_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

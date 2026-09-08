// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRISKLEVELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRISKLEVELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListRiskLevelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
    };
    friend void from_json(const Darabonba::Json& j, ListRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
    };
    ListRiskLevelsResponseBody() = default ;
    ListRiskLevelsResponseBody(const ListRiskLevelsResponseBody &) = default ;
    ListRiskLevelsResponseBody(ListRiskLevelsResponseBody &&) = default ;
    ListRiskLevelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRiskLevelsResponseBody() = default ;
    ListRiskLevelsResponseBody& operator=(const ListRiskLevelsResponseBody &) = default ;
    ListRiskLevelsResponseBody& operator=(ListRiskLevelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskLevelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskLevelList& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ReferenceNum, referenceNum_);
      };
      friend void from_json(const Darabonba::Json& j, RiskLevelList& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ReferenceNum, referenceNum_);
      };
      RiskLevelList() = default ;
      RiskLevelList(const RiskLevelList &) = default ;
      RiskLevelList(RiskLevelList &&) = default ;
      RiskLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskLevelList() = default ;
      RiskLevelList& operator=(const RiskLevelList &) = default ;
      RiskLevelList& operator=(RiskLevelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->referenceNum_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RiskLevelList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline RiskLevelList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RiskLevelList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // referenceNum Field Functions 
      bool hasReferenceNum() const { return this->referenceNum_ != nullptr;};
      void deleteReferenceNum() { this->referenceNum_ = nullptr;};
      inline int32_t getReferenceNum() const { DARABONBA_PTR_GET_DEFAULT(referenceNum_, 0) };
      inline RiskLevelList& setReferenceNum(int32_t referenceNum) { DARABONBA_PTR_SET_VALUE(referenceNum_, referenceNum) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> referenceNum_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskLevelList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRiskLevelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<ListRiskLevelsResponseBody::RiskLevelList> & getRiskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<ListRiskLevelsResponseBody::RiskLevelList>) };
    inline vector<ListRiskLevelsResponseBody::RiskLevelList> getRiskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<ListRiskLevelsResponseBody::RiskLevelList>) };
    inline ListRiskLevelsResponseBody& setRiskLevelList(const vector<ListRiskLevelsResponseBody::RiskLevelList> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline ListRiskLevelsResponseBody& setRiskLevelList(vector<ListRiskLevelsResponseBody::RiskLevelList> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListRiskLevelsResponseBody::RiskLevelList>> riskLevelList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif

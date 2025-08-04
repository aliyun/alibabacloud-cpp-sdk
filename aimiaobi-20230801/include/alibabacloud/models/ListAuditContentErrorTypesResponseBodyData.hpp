// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDITCONTENTERRORTYPESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDITCONTENTERRORTYPESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuditContentErrorTypesResponseBodyDataSubClasses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListAuditContentErrorTypesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuditContentErrorTypesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MajorClassCode, majorClassCode_);
      DARABONBA_PTR_TO_JSON(MajorClassName, majorClassName_);
      DARABONBA_PTR_TO_JSON(SubClasses, subClasses_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuditContentErrorTypesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MajorClassCode, majorClassCode_);
      DARABONBA_PTR_FROM_JSON(MajorClassName, majorClassName_);
      DARABONBA_PTR_FROM_JSON(SubClasses, subClasses_);
    };
    ListAuditContentErrorTypesResponseBodyData() = default ;
    ListAuditContentErrorTypesResponseBodyData(const ListAuditContentErrorTypesResponseBodyData &) = default ;
    ListAuditContentErrorTypesResponseBodyData(ListAuditContentErrorTypesResponseBodyData &&) = default ;
    ListAuditContentErrorTypesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuditContentErrorTypesResponseBodyData() = default ;
    ListAuditContentErrorTypesResponseBodyData& operator=(const ListAuditContentErrorTypesResponseBodyData &) = default ;
    ListAuditContentErrorTypesResponseBodyData& operator=(ListAuditContentErrorTypesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->majorClassCode_ != nullptr
        && this->majorClassName_ != nullptr && this->subClasses_ != nullptr; };
    // majorClassCode Field Functions 
    bool hasMajorClassCode() const { return this->majorClassCode_ != nullptr;};
    void deleteMajorClassCode() { this->majorClassCode_ = nullptr;};
    inline string majorClassCode() const { DARABONBA_PTR_GET_DEFAULT(majorClassCode_, "") };
    inline ListAuditContentErrorTypesResponseBodyData& setMajorClassCode(string majorClassCode) { DARABONBA_PTR_SET_VALUE(majorClassCode_, majorClassCode) };


    // majorClassName Field Functions 
    bool hasMajorClassName() const { return this->majorClassName_ != nullptr;};
    void deleteMajorClassName() { this->majorClassName_ = nullptr;};
    inline string majorClassName() const { DARABONBA_PTR_GET_DEFAULT(majorClassName_, "") };
    inline ListAuditContentErrorTypesResponseBodyData& setMajorClassName(string majorClassName) { DARABONBA_PTR_SET_VALUE(majorClassName_, majorClassName) };


    // subClasses Field Functions 
    bool hasSubClasses() const { return this->subClasses_ != nullptr;};
    void deleteSubClasses() { this->subClasses_ = nullptr;};
    inline const vector<Models::ListAuditContentErrorTypesResponseBodyDataSubClasses> & subClasses() const { DARABONBA_PTR_GET_CONST(subClasses_, vector<Models::ListAuditContentErrorTypesResponseBodyDataSubClasses>) };
    inline vector<Models::ListAuditContentErrorTypesResponseBodyDataSubClasses> subClasses() { DARABONBA_PTR_GET(subClasses_, vector<Models::ListAuditContentErrorTypesResponseBodyDataSubClasses>) };
    inline ListAuditContentErrorTypesResponseBodyData& setSubClasses(const vector<Models::ListAuditContentErrorTypesResponseBodyDataSubClasses> & subClasses) { DARABONBA_PTR_SET_VALUE(subClasses_, subClasses) };
    inline ListAuditContentErrorTypesResponseBodyData& setSubClasses(vector<Models::ListAuditContentErrorTypesResponseBodyDataSubClasses> && subClasses) { DARABONBA_PTR_SET_RVALUE(subClasses_, subClasses) };


  protected:
    std::shared_ptr<string> majorClassCode_ = nullptr;
    std::shared_ptr<string> majorClassName_ = nullptr;
    std::shared_ptr<vector<Models::ListAuditContentErrorTypesResponseBodyDataSubClasses>> subClasses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

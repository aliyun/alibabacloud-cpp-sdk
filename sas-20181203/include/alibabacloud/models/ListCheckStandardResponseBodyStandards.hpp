// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKSTANDARDRESPONSEBODYSTANDARDS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKSTANDARDRESPONSEBODYSTANDARDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckStandardResponseBodyStandardsRequirements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckStandardResponseBodyStandards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckStandardResponseBodyStandards& obj) { 
      DARABONBA_PTR_TO_JSON(BindVendor, bindVendor_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Requirements, requirements_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(ShowPriorityLevel, showPriorityLevel_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckStandardResponseBodyStandards& obj) { 
      DARABONBA_PTR_FROM_JSON(BindVendor, bindVendor_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Requirements, requirements_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(ShowPriorityLevel, showPriorityLevel_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCheckStandardResponseBodyStandards() = default ;
    ListCheckStandardResponseBodyStandards(const ListCheckStandardResponseBodyStandards &) = default ;
    ListCheckStandardResponseBodyStandards(ListCheckStandardResponseBodyStandards &&) = default ;
    ListCheckStandardResponseBodyStandards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckStandardResponseBodyStandards() = default ;
    ListCheckStandardResponseBodyStandards& operator=(const ListCheckStandardResponseBodyStandards &) = default ;
    ListCheckStandardResponseBodyStandards& operator=(ListCheckStandardResponseBodyStandards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindVendor_ != nullptr
        && this->id_ != nullptr && this->requirements_ != nullptr && this->showName_ != nullptr && this->showPriorityLevel_ != nullptr && this->type_ != nullptr; };
    // bindVendor Field Functions 
    bool hasBindVendor() const { return this->bindVendor_ != nullptr;};
    void deleteBindVendor() { this->bindVendor_ = nullptr;};
    inline int32_t bindVendor() const { DARABONBA_PTR_GET_DEFAULT(bindVendor_, 0) };
    inline ListCheckStandardResponseBodyStandards& setBindVendor(int32_t bindVendor) { DARABONBA_PTR_SET_VALUE(bindVendor_, bindVendor) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCheckStandardResponseBodyStandards& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requirements Field Functions 
    bool hasRequirements() const { return this->requirements_ != nullptr;};
    void deleteRequirements() { this->requirements_ = nullptr;};
    inline const vector<Models::ListCheckStandardResponseBodyStandardsRequirements> & requirements() const { DARABONBA_PTR_GET_CONST(requirements_, vector<Models::ListCheckStandardResponseBodyStandardsRequirements>) };
    inline vector<Models::ListCheckStandardResponseBodyStandardsRequirements> requirements() { DARABONBA_PTR_GET(requirements_, vector<Models::ListCheckStandardResponseBodyStandardsRequirements>) };
    inline ListCheckStandardResponseBodyStandards& setRequirements(const vector<Models::ListCheckStandardResponseBodyStandardsRequirements> & requirements) { DARABONBA_PTR_SET_VALUE(requirements_, requirements) };
    inline ListCheckStandardResponseBodyStandards& setRequirements(vector<Models::ListCheckStandardResponseBodyStandardsRequirements> && requirements) { DARABONBA_PTR_SET_RVALUE(requirements_, requirements) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListCheckStandardResponseBodyStandards& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // showPriorityLevel Field Functions 
    bool hasShowPriorityLevel() const { return this->showPriorityLevel_ != nullptr;};
    void deleteShowPriorityLevel() { this->showPriorityLevel_ = nullptr;};
    inline int32_t showPriorityLevel() const { DARABONBA_PTR_GET_DEFAULT(showPriorityLevel_, 0) };
    inline ListCheckStandardResponseBodyStandards& setShowPriorityLevel(int32_t showPriorityLevel) { DARABONBA_PTR_SET_VALUE(showPriorityLevel_, showPriorityLevel) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCheckStandardResponseBodyStandards& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cloud service provider that uses the standard. Valid values:
    // 
    // *   **0**: Alibaba Cloud.
    // *   **3**: Tencent Cloud.
    // *   **4**: Huawei Cloud.
    // *   **5**: Microsoft Azure.
    // *   **7**: AWS.
    std::shared_ptr<int32_t> bindVendor_ = nullptr;
    // The ID of the standard.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The requirements.
    std::shared_ptr<vector<Models::ListCheckStandardResponseBodyStandardsRequirements>> requirements_ = nullptr;
    // The display name of the check item.
    std::shared_ptr<string> showName_ = nullptr;
    // The priority for display.
    std::shared_ptr<int32_t> showPriorityLevel_ = nullptr;
    // The type of the standard.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

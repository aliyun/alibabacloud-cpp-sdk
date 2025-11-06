// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBUSINESSLOCATIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYBUSINESSLOCATIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryBusinessLocationsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBusinessLocationsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CnName, cnName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DistrictCnName, districtCnName_);
      DARABONBA_PTR_TO_JSON(DistrictEnName, districtEnName_);
      DARABONBA_PTR_TO_JSON(DistrictId, districtId_);
      DARABONBA_PTR_TO_JSON(DistrictOrdering, districtOrdering_);
      DARABONBA_PTR_TO_JSON(DistrictShowName, districtShowName_);
      DARABONBA_PTR_TO_JSON(EnDescription, enDescription_);
      DARABONBA_PTR_TO_JSON(EnName, enName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Ordering, ordering_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBusinessLocationsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CnName, cnName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DistrictCnName, districtCnName_);
      DARABONBA_PTR_FROM_JSON(DistrictEnName, districtEnName_);
      DARABONBA_PTR_FROM_JSON(DistrictId, districtId_);
      DARABONBA_PTR_FROM_JSON(DistrictOrdering, districtOrdering_);
      DARABONBA_PTR_FROM_JSON(DistrictShowName, districtShowName_);
      DARABONBA_PTR_FROM_JSON(EnDescription, enDescription_);
      DARABONBA_PTR_FROM_JSON(EnName, enName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Ordering, ordering_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryBusinessLocationsResponseBodyData() = default ;
    QueryBusinessLocationsResponseBodyData(const QueryBusinessLocationsResponseBodyData &) = default ;
    QueryBusinessLocationsResponseBodyData(QueryBusinessLocationsResponseBodyData &&) = default ;
    QueryBusinessLocationsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBusinessLocationsResponseBodyData() = default ;
    QueryBusinessLocationsResponseBodyData& operator=(const QueryBusinessLocationsResponseBodyData &) = default ;
    QueryBusinessLocationsResponseBodyData& operator=(QueryBusinessLocationsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnName_ == nullptr
        && return this->description_ == nullptr && return this->districtCnName_ == nullptr && return this->districtEnName_ == nullptr && return this->districtId_ == nullptr && return this->districtOrdering_ == nullptr
        && return this->districtShowName_ == nullptr && return this->enDescription_ == nullptr && return this->enName_ == nullptr && return this->name_ == nullptr && return this->ordering_ == nullptr
        && return this->showName_ == nullptr && return this->type_ == nullptr; };
    // cnName Field Functions 
    bool hasCnName() const { return this->cnName_ != nullptr;};
    void deleteCnName() { this->cnName_ = nullptr;};
    inline string cnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
    inline QueryBusinessLocationsResponseBodyData& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryBusinessLocationsResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // districtCnName Field Functions 
    bool hasDistrictCnName() const { return this->districtCnName_ != nullptr;};
    void deleteDistrictCnName() { this->districtCnName_ = nullptr;};
    inline string districtCnName() const { DARABONBA_PTR_GET_DEFAULT(districtCnName_, "") };
    inline QueryBusinessLocationsResponseBodyData& setDistrictCnName(string districtCnName) { DARABONBA_PTR_SET_VALUE(districtCnName_, districtCnName) };


    // districtEnName Field Functions 
    bool hasDistrictEnName() const { return this->districtEnName_ != nullptr;};
    void deleteDistrictEnName() { this->districtEnName_ = nullptr;};
    inline string districtEnName() const { DARABONBA_PTR_GET_DEFAULT(districtEnName_, "") };
    inline QueryBusinessLocationsResponseBodyData& setDistrictEnName(string districtEnName) { DARABONBA_PTR_SET_VALUE(districtEnName_, districtEnName) };


    // districtId Field Functions 
    bool hasDistrictId() const { return this->districtId_ != nullptr;};
    void deleteDistrictId() { this->districtId_ = nullptr;};
    inline string districtId() const { DARABONBA_PTR_GET_DEFAULT(districtId_, "") };
    inline QueryBusinessLocationsResponseBodyData& setDistrictId(string districtId) { DARABONBA_PTR_SET_VALUE(districtId_, districtId) };


    // districtOrdering Field Functions 
    bool hasDistrictOrdering() const { return this->districtOrdering_ != nullptr;};
    void deleteDistrictOrdering() { this->districtOrdering_ = nullptr;};
    inline int32_t districtOrdering() const { DARABONBA_PTR_GET_DEFAULT(districtOrdering_, 0) };
    inline QueryBusinessLocationsResponseBodyData& setDistrictOrdering(int32_t districtOrdering) { DARABONBA_PTR_SET_VALUE(districtOrdering_, districtOrdering) };


    // districtShowName Field Functions 
    bool hasDistrictShowName() const { return this->districtShowName_ != nullptr;};
    void deleteDistrictShowName() { this->districtShowName_ = nullptr;};
    inline string districtShowName() const { DARABONBA_PTR_GET_DEFAULT(districtShowName_, "") };
    inline QueryBusinessLocationsResponseBodyData& setDistrictShowName(string districtShowName) { DARABONBA_PTR_SET_VALUE(districtShowName_, districtShowName) };


    // enDescription Field Functions 
    bool hasEnDescription() const { return this->enDescription_ != nullptr;};
    void deleteEnDescription() { this->enDescription_ = nullptr;};
    inline string enDescription() const { DARABONBA_PTR_GET_DEFAULT(enDescription_, "") };
    inline QueryBusinessLocationsResponseBodyData& setEnDescription(string enDescription) { DARABONBA_PTR_SET_VALUE(enDescription_, enDescription) };


    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string enName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline QueryBusinessLocationsResponseBodyData& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryBusinessLocationsResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ordering Field Functions 
    bool hasOrdering() const { return this->ordering_ != nullptr;};
    void deleteOrdering() { this->ordering_ = nullptr;};
    inline int32_t ordering() const { DARABONBA_PTR_GET_DEFAULT(ordering_, 0) };
    inline QueryBusinessLocationsResponseBodyData& setOrdering(int32_t ordering) { DARABONBA_PTR_SET_VALUE(ordering_, ordering) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline QueryBusinessLocationsResponseBodyData& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryBusinessLocationsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The Chinese name of the region.
    std::shared_ptr<string> cnName_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The Chinese name of the district.
    std::shared_ptr<string> districtCnName_ = nullptr;
    // The English name of the district.
    std::shared_ptr<string> districtEnName_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> districtId_ = nullptr;
    // The ordering information of the district.
    std::shared_ptr<int32_t> districtOrdering_ = nullptr;
    // The display name of the district.
    std::shared_ptr<string> districtShowName_ = nullptr;
    // The complete description of the region.
    std::shared_ptr<string> enDescription_ = nullptr;
    // The English name of the region.
    std::shared_ptr<string> enName_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The ordering information.
    std::shared_ptr<int32_t> ordering_ = nullptr;
    // The display name.
    std::shared_ptr<string> showName_ = nullptr;
    // The type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

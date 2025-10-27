// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTALERTMODERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTALERTMODERESPONSEBODYDATA_HPP_
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
  class ListClientAlertModeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientAlertModeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientAlertModeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    ListClientAlertModeResponseBodyData() = default ;
    ListClientAlertModeResponseBodyData(const ListClientAlertModeResponseBodyData &) = default ;
    ListClientAlertModeResponseBodyData(ListClientAlertModeResponseBodyData &&) = default ;
    ListClientAlertModeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientAlertModeResponseBodyData() = default ;
    ListClientAlertModeResponseBodyData& operator=(const ListClientAlertModeResponseBodyData &) = default ;
    ListClientAlertModeResponseBodyData& operator=(ListClientAlertModeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->uuids_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListClientAlertModeResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & uuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> uuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline ListClientAlertModeResponseBodyData& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline ListClientAlertModeResponseBodyData& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The UUIDs of the assets.
    std::shared_ptr<vector<string>> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

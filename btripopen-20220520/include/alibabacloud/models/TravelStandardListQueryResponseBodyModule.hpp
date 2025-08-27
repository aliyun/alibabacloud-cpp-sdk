// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TravelStandardListQueryResponseBodyModuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardListQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(total_size, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(total_size, totalSize_);
    };
    TravelStandardListQueryResponseBodyModule() = default ;
    TravelStandardListQueryResponseBodyModule(const TravelStandardListQueryResponseBodyModule &) = default ;
    TravelStandardListQueryResponseBodyModule(TravelStandardListQueryResponseBodyModule &&) = default ;
    TravelStandardListQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardListQueryResponseBodyModule() = default ;
    TravelStandardListQueryResponseBodyModule& operator=(const TravelStandardListQueryResponseBodyModule &) = default ;
    TravelStandardListQueryResponseBodyModule& operator=(TravelStandardListQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->totalSize_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::TravelStandardListQueryResponseBodyModuleItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::TravelStandardListQueryResponseBodyModuleItems>) };
    inline vector<Models::TravelStandardListQueryResponseBodyModuleItems> items() { DARABONBA_PTR_GET(items_, vector<Models::TravelStandardListQueryResponseBodyModuleItems>) };
    inline TravelStandardListQueryResponseBodyModule& setItems(const vector<Models::TravelStandardListQueryResponseBodyModuleItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline TravelStandardListQueryResponseBodyModule& setItems(vector<Models::TravelStandardListQueryResponseBodyModuleItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline TravelStandardListQueryResponseBodyModule& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<vector<Models::TravelStandardListQueryResponseBodyModuleItems>> items_ = nullptr;
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TravelStandardRelateQueryResponseBodyModuleReserveBindEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardRelateQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardRelateQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(reserve_bind_entity_list, reserveBindEntityList_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardRelateQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(reserve_bind_entity_list, reserveBindEntityList_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    TravelStandardRelateQueryResponseBodyModule() = default ;
    TravelStandardRelateQueryResponseBodyModule(const TravelStandardRelateQueryResponseBodyModule &) = default ;
    TravelStandardRelateQueryResponseBodyModule(TravelStandardRelateQueryResponseBodyModule &&) = default ;
    TravelStandardRelateQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardRelateQueryResponseBodyModule() = default ;
    TravelStandardRelateQueryResponseBodyModule& operator=(const TravelStandardRelateQueryResponseBodyModule &) = default ;
    TravelStandardRelateQueryResponseBodyModule& operator=(TravelStandardRelateQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reserveBindEntityList_ != nullptr
        && this->total_ != nullptr; };
    // reserveBindEntityList Field Functions 
    bool hasReserveBindEntityList() const { return this->reserveBindEntityList_ != nullptr;};
    void deleteReserveBindEntityList() { this->reserveBindEntityList_ = nullptr;};
    inline const vector<Models::TravelStandardRelateQueryResponseBodyModuleReserveBindEntityList> & reserveBindEntityList() const { DARABONBA_PTR_GET_CONST(reserveBindEntityList_, vector<Models::TravelStandardRelateQueryResponseBodyModuleReserveBindEntityList>) };
    inline vector<Models::TravelStandardRelateQueryResponseBodyModuleReserveBindEntityList> reserveBindEntityList() { DARABONBA_PTR_GET(reserveBindEntityList_, vector<Models::TravelStandardRelateQueryResponseBodyModuleReserveBindEntityList>) };
    inline TravelStandardRelateQueryResponseBodyModule& setReserveBindEntityList(const vector<Models::TravelStandardRelateQueryResponseBodyModuleReserveBindEntityList> & reserveBindEntityList) { DARABONBA_PTR_SET_VALUE(reserveBindEntityList_, reserveBindEntityList) };
    inline TravelStandardRelateQueryResponseBodyModule& setReserveBindEntityList(vector<Models::TravelStandardRelateQueryResponseBodyModuleReserveBindEntityList> && reserveBindEntityList) { DARABONBA_PTR_SET_RVALUE(reserveBindEntityList_, reserveBindEntityList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline TravelStandardRelateQueryResponseBodyModule& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::TravelStandardRelateQueryResponseBodyModuleReserveBindEntityList>> reserveBindEntityList_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

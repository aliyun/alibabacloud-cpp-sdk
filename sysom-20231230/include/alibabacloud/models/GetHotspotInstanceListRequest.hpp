// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTINSTANCELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTINSTANCELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotspotInstanceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotInstanceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(beg_end, begEnd_);
      DARABONBA_PTR_TO_JSON(beg_start, begStart_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotInstanceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(beg_end, begEnd_);
      DARABONBA_PTR_FROM_JSON(beg_start, begStart_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    GetHotspotInstanceListRequest() = default ;
    GetHotspotInstanceListRequest(const GetHotspotInstanceListRequest &) = default ;
    GetHotspotInstanceListRequest(GetHotspotInstanceListRequest &&) = default ;
    GetHotspotInstanceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotInstanceListRequest() = default ;
    GetHotspotInstanceListRequest& operator=(const GetHotspotInstanceListRequest &) = default ;
    GetHotspotInstanceListRequest& operator=(GetHotspotInstanceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->begEnd_ == nullptr
        && this->begStart_ == nullptr && this->table_ == nullptr; };
    // begEnd Field Functions 
    bool hasBegEnd() const { return this->begEnd_ != nullptr;};
    void deleteBegEnd() { this->begEnd_ = nullptr;};
    inline int64_t getBegEnd() const { DARABONBA_PTR_GET_DEFAULT(begEnd_, 0L) };
    inline GetHotspotInstanceListRequest& setBegEnd(int64_t begEnd) { DARABONBA_PTR_SET_VALUE(begEnd_, begEnd) };


    // begStart Field Functions 
    bool hasBegStart() const { return this->begStart_ != nullptr;};
    void deleteBegStart() { this->begStart_ = nullptr;};
    inline int64_t getBegStart() const { DARABONBA_PTR_GET_DEFAULT(begStart_, 0L) };
    inline GetHotspotInstanceListRequest& setBegStart(int64_t begStart) { DARABONBA_PTR_SET_VALUE(begStart_, begStart) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline GetHotspotInstanceListRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> begEnd_ {};
    // This parameter is required.
    shared_ptr<int64_t> begStart_ {};
    // This parameter is required.
    shared_ptr<string> table_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif

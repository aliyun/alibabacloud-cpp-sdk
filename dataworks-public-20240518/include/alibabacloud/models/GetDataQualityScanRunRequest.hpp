// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetDataQualityScanRunRequest() = default ;
    GetDataQualityScanRunRequest(const GetDataQualityScanRunRequest &) = default ;
    GetDataQualityScanRunRequest(GetDataQualityScanRunRequest &&) = default ;
    GetDataQualityScanRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunRequest() = default ;
    GetDataQualityScanRunRequest& operator=(const GetDataQualityScanRunRequest &) = default ;
    GetDataQualityScanRunRequest& operator=(GetDataQualityScanRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataQualityScanRunRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The data quality monitoring run record ID.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

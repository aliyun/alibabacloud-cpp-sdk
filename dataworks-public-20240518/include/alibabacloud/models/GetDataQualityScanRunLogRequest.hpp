// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
    };
    GetDataQualityScanRunLogRequest() = default ;
    GetDataQualityScanRunLogRequest(const GetDataQualityScanRunLogRequest &) = default ;
    GetDataQualityScanRunLogRequest(GetDataQualityScanRunLogRequest &&) = default ;
    GetDataQualityScanRunLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunLogRequest() = default ;
    GetDataQualityScanRunLogRequest& operator=(const GetDataQualityScanRunLogRequest &) = default ;
    GetDataQualityScanRunLogRequest& operator=(GetDataQualityScanRunLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->offset_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataQualityScanRunLogRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline GetDataQualityScanRunLogRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


  protected:
    // The ID of the data quality monitor run record.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The starting position of the log, in bytes, relative to the beginning of the file. Each query returns a maximum of 512 KB of content.
    std::shared_ptr<int64_t> offset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

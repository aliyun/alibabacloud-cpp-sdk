// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAQUALITYSCANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAQUALITYSCANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteDataQualityScanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataQualityScanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataQualityScanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteDataQualityScanRequest() = default ;
    DeleteDataQualityScanRequest(const DeleteDataQualityScanRequest &) = default ;
    DeleteDataQualityScanRequest(DeleteDataQualityScanRequest &&) = default ;
    DeleteDataQualityScanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataQualityScanRequest() = default ;
    DeleteDataQualityScanRequest& operator=(const DeleteDataQualityScanRequest &) = default ;
    DeleteDataQualityScanRequest& operator=(DeleteDataQualityScanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->id_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeleteDataQualityScanRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteDataQualityScanRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The deprecated parameter. No configuration is required.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the data quality monitor.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

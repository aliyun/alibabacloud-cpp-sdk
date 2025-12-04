// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDatasetVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetDatasetVersionRequest() = default ;
    GetDatasetVersionRequest(const GetDatasetVersionRequest &) = default ;
    GetDatasetVersionRequest(GetDatasetVersionRequest &&) = default ;
    GetDatasetVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetVersionRequest() = default ;
    GetDatasetVersionRequest& operator=(const GetDatasetVersionRequest &) = default ;
    GetDatasetVersionRequest& operator=(GetDatasetVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDatasetVersionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEBUSINESSMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEBUSINESSMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTableBusinessMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableBusinessMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Readme, readme_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableBusinessMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Readme, readme_);
    };
    UpdateTableBusinessMetadataRequest() = default ;
    UpdateTableBusinessMetadataRequest(const UpdateTableBusinessMetadataRequest &) = default ;
    UpdateTableBusinessMetadataRequest(UpdateTableBusinessMetadataRequest &&) = default ;
    UpdateTableBusinessMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableBusinessMetadataRequest() = default ;
    UpdateTableBusinessMetadataRequest& operator=(const UpdateTableBusinessMetadataRequest &) = default ;
    UpdateTableBusinessMetadataRequest& operator=(UpdateTableBusinessMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->readme_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateTableBusinessMetadataRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // readme Field Functions 
    bool hasReadme() const { return this->readme_ != nullptr;};
    void deleteReadme() { this->readme_ = nullptr;};
    inline string readme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
    inline UpdateTableBusinessMetadataRequest& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


  protected:
    // The table ID. You can refer to the format of the table ID returned by the ListTables operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The usage notes. The rich text format is supported.
    std::shared_ptr<string> readme_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

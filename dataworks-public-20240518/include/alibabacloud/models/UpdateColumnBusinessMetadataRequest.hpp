// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOLUMNBUSINESSMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOLUMNBUSINESSMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateColumnBusinessMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateColumnBusinessMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateColumnBusinessMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateColumnBusinessMetadataRequest() = default ;
    UpdateColumnBusinessMetadataRequest(const UpdateColumnBusinessMetadataRequest &) = default ;
    UpdateColumnBusinessMetadataRequest(UpdateColumnBusinessMetadataRequest &&) = default ;
    UpdateColumnBusinessMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateColumnBusinessMetadataRequest() = default ;
    UpdateColumnBusinessMetadataRequest& operator=(const UpdateColumnBusinessMetadataRequest &) = default ;
    UpdateColumnBusinessMetadataRequest& operator=(UpdateColumnBusinessMetadataRequest &&) = default ;
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
    inline UpdateColumnBusinessMetadataRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateColumnBusinessMetadataRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // The column ID. You can call the ListColumns operation to query the ID. For more information, see [Concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

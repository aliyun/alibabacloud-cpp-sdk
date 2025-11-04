// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESOURCELOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESOURCELOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteSourceLocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSourceLocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SoftDelete, softDelete_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSourceLocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SoftDelete, softDelete_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
    };
    DeleteSourceLocationRequest() = default ;
    DeleteSourceLocationRequest(const DeleteSourceLocationRequest &) = default ;
    DeleteSourceLocationRequest(DeleteSourceLocationRequest &&) = default ;
    DeleteSourceLocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSourceLocationRequest() = default ;
    DeleteSourceLocationRequest& operator=(const DeleteSourceLocationRequest &) = default ;
    DeleteSourceLocationRequest& operator=(DeleteSourceLocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->softDelete_ == nullptr
        && return this->sourceLocationName_ == nullptr; };
    // softDelete Field Functions 
    bool hasSoftDelete() const { return this->softDelete_ != nullptr;};
    void deleteSoftDelete() { this->softDelete_ = nullptr;};
    inline bool softDelete() const { DARABONBA_PTR_GET_DEFAULT(softDelete_, false) };
    inline DeleteSourceLocationRequest& setSoftDelete(bool softDelete) { DARABONBA_PTR_SET_VALUE(softDelete_, softDelete) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline DeleteSourceLocationRequest& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


  protected:
    // Specifies whether to use delete markers.
    std::shared_ptr<bool> softDelete_ = nullptr;
    // The name of the source location.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceLocationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

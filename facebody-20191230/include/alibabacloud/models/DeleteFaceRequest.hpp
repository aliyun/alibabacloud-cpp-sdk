// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DeleteFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
    };
    DeleteFaceRequest() = default ;
    DeleteFaceRequest(const DeleteFaceRequest &) = default ;
    DeleteFaceRequest(DeleteFaceRequest &&) = default ;
    DeleteFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceRequest() = default ;
    DeleteFaceRequest& operator=(const DeleteFaceRequest &) = default ;
    DeleteFaceRequest& operator=(DeleteFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->faceId_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DeleteFaceRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline DeleteFaceRequest& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> faceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif

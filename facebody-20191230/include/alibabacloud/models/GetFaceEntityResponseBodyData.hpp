// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFACEENTITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFACEENTITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFaceEntityResponseBodyDataFaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GetFaceEntityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFaceEntityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(Faces, faces_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, GetFaceEntityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(Faces, faces_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    GetFaceEntityResponseBodyData() = default ;
    GetFaceEntityResponseBodyData(const GetFaceEntityResponseBodyData &) = default ;
    GetFaceEntityResponseBodyData(GetFaceEntityResponseBodyData &&) = default ;
    GetFaceEntityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFaceEntityResponseBodyData() = default ;
    GetFaceEntityResponseBodyData& operator=(const GetFaceEntityResponseBodyData &) = default ;
    GetFaceEntityResponseBodyData& operator=(GetFaceEntityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->entityId_ == nullptr && return this->faces_ == nullptr && return this->labels_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetFaceEntityResponseBodyData& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline GetFaceEntityResponseBodyData& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // faces Field Functions 
    bool hasFaces() const { return this->faces_ != nullptr;};
    void deleteFaces() { this->faces_ = nullptr;};
    inline const vector<Models::GetFaceEntityResponseBodyDataFaces> & faces() const { DARABONBA_PTR_GET_CONST(faces_, vector<Models::GetFaceEntityResponseBodyDataFaces>) };
    inline vector<Models::GetFaceEntityResponseBodyDataFaces> faces() { DARABONBA_PTR_GET(faces_, vector<Models::GetFaceEntityResponseBodyDataFaces>) };
    inline GetFaceEntityResponseBodyData& setFaces(const vector<Models::GetFaceEntityResponseBodyDataFaces> & faces) { DARABONBA_PTR_SET_VALUE(faces_, faces) };
    inline GetFaceEntityResponseBodyData& setFaces(vector<Models::GetFaceEntityResponseBodyDataFaces> && faces) { DARABONBA_PTR_SET_RVALUE(faces_, faces) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline GetFaceEntityResponseBodyData& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


  protected:
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> entityId_ = nullptr;
    std::shared_ptr<vector<Models::GetFaceEntityResponseBodyDataFaces>> faces_ = nullptr;
    std::shared_ptr<string> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif

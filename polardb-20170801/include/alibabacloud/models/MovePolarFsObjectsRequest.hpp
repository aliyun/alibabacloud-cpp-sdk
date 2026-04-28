// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEPOLARFSOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEPOLARFSOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class MovePolarFsObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MovePolarFsObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectsToMove, objectsToMove_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, MovePolarFsObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectsToMove, objectsToMove_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    MovePolarFsObjectsRequest() = default ;
    MovePolarFsObjectsRequest(const MovePolarFsObjectsRequest &) = default ;
    MovePolarFsObjectsRequest(MovePolarFsObjectsRequest &&) = default ;
    MovePolarFsObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MovePolarFsObjectsRequest() = default ;
    MovePolarFsObjectsRequest& operator=(const MovePolarFsObjectsRequest &) = default ;
    MovePolarFsObjectsRequest& operator=(MovePolarFsObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ObjectsToMove : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ObjectsToMove& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationPath, destinationPath_);
        DARABONBA_PTR_TO_JSON(SourcePath, sourcePath_);
      };
      friend void from_json(const Darabonba::Json& j, ObjectsToMove& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationPath, destinationPath_);
        DARABONBA_PTR_FROM_JSON(SourcePath, sourcePath_);
      };
      ObjectsToMove() = default ;
      ObjectsToMove(const ObjectsToMove &) = default ;
      ObjectsToMove(ObjectsToMove &&) = default ;
      ObjectsToMove(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ObjectsToMove() = default ;
      ObjectsToMove& operator=(const ObjectsToMove &) = default ;
      ObjectsToMove& operator=(ObjectsToMove &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationPath_ == nullptr
        && this->sourcePath_ == nullptr; };
      // destinationPath Field Functions 
      bool hasDestinationPath() const { return this->destinationPath_ != nullptr;};
      void deleteDestinationPath() { this->destinationPath_ = nullptr;};
      inline string getDestinationPath() const { DARABONBA_PTR_GET_DEFAULT(destinationPath_, "") };
      inline ObjectsToMove& setDestinationPath(string destinationPath) { DARABONBA_PTR_SET_VALUE(destinationPath_, destinationPath) };


      // sourcePath Field Functions 
      bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
      void deleteSourcePath() { this->sourcePath_ = nullptr;};
      inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
      inline ObjectsToMove& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    protected:
      shared_ptr<string> destinationPath_ {};
      shared_ptr<string> sourcePath_ {};
    };

    virtual bool empty() const override { return this->objectsToMove_ == nullptr
        && this->polarFsInstanceId_ == nullptr; };
    // objectsToMove Field Functions 
    bool hasObjectsToMove() const { return this->objectsToMove_ != nullptr;};
    void deleteObjectsToMove() { this->objectsToMove_ = nullptr;};
    inline const vector<MovePolarFsObjectsRequest::ObjectsToMove> & getObjectsToMove() const { DARABONBA_PTR_GET_CONST(objectsToMove_, vector<MovePolarFsObjectsRequest::ObjectsToMove>) };
    inline vector<MovePolarFsObjectsRequest::ObjectsToMove> getObjectsToMove() { DARABONBA_PTR_GET(objectsToMove_, vector<MovePolarFsObjectsRequest::ObjectsToMove>) };
    inline MovePolarFsObjectsRequest& setObjectsToMove(const vector<MovePolarFsObjectsRequest::ObjectsToMove> & objectsToMove) { DARABONBA_PTR_SET_VALUE(objectsToMove_, objectsToMove) };
    inline MovePolarFsObjectsRequest& setObjectsToMove(vector<MovePolarFsObjectsRequest::ObjectsToMove> && objectsToMove) { DARABONBA_PTR_SET_RVALUE(objectsToMove_, objectsToMove) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline MovePolarFsObjectsRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    shared_ptr<vector<MovePolarFsObjectsRequest::ObjectsToMove>> objectsToMove_ {};
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

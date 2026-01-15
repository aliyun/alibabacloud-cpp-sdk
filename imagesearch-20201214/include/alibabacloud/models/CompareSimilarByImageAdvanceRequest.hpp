// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARESIMILARBYIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPARESIMILARBYIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class CompareSimilarByImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareSimilarByImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      // primaryPicContentObject_ is stream
      // secondaryPicContentObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, CompareSimilarByImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      // primaryPicContentObject_ is stream
      // secondaryPicContentObject_ is stream
    };
    CompareSimilarByImageAdvanceRequest() = default ;
    CompareSimilarByImageAdvanceRequest(const CompareSimilarByImageAdvanceRequest &) = default ;
    CompareSimilarByImageAdvanceRequest(CompareSimilarByImageAdvanceRequest &&) = default ;
    CompareSimilarByImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareSimilarByImageAdvanceRequest() = default ;
    CompareSimilarByImageAdvanceRequest& operator=(const CompareSimilarByImageAdvanceRequest &) = default ;
    CompareSimilarByImageAdvanceRequest& operator=(CompareSimilarByImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->primaryPicContentObject_ == nullptr && this->secondaryPicContentObject_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CompareSimilarByImageAdvanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // primaryPicContentObject Field Functions 
    bool hasPrimaryPicContentObject() const { return this->primaryPicContentObject_ != nullptr;};
    void deletePrimaryPicContentObject() { this->primaryPicContentObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getPrimaryPicContentObject() const { DARABONBA_GET(primaryPicContentObject_) };
    inline CompareSimilarByImageAdvanceRequest& setPrimaryPicContentObject(shared_ptr<Darabonba::IStream> primaryPicContentObject) { DARABONBA_SET_VALUE(primaryPicContentObject_, primaryPicContentObject) };


    // secondaryPicContentObject Field Functions 
    bool hasSecondaryPicContentObject() const { return this->secondaryPicContentObject_ != nullptr;};
    void deleteSecondaryPicContentObject() { this->secondaryPicContentObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getSecondaryPicContentObject() const { DARABONBA_GET(secondaryPicContentObject_) };
    inline CompareSimilarByImageAdvanceRequest& setSecondaryPicContentObject(shared_ptr<Darabonba::IStream> secondaryPicContentObject) { DARABONBA_SET_VALUE(secondaryPicContentObject_, secondaryPicContentObject) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // This parameter is required.
    shared_ptr<Darabonba::IStream> primaryPicContentObject_ {};
    // This parameter is required.
    shared_ptr<Darabonba::IStream> secondaryPicContentObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif

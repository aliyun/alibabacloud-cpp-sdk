// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARESIMILARBYIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPARESIMILARBYIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class CompareSimilarByImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareSimilarByImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PrimaryPicContent, primaryPicContent_);
      DARABONBA_PTR_TO_JSON(SecondaryPicContent, secondaryPicContent_);
    };
    friend void from_json(const Darabonba::Json& j, CompareSimilarByImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PrimaryPicContent, primaryPicContent_);
      DARABONBA_PTR_FROM_JSON(SecondaryPicContent, secondaryPicContent_);
    };
    CompareSimilarByImageRequest() = default ;
    CompareSimilarByImageRequest(const CompareSimilarByImageRequest &) = default ;
    CompareSimilarByImageRequest(CompareSimilarByImageRequest &&) = default ;
    CompareSimilarByImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareSimilarByImageRequest() = default ;
    CompareSimilarByImageRequest& operator=(const CompareSimilarByImageRequest &) = default ;
    CompareSimilarByImageRequest& operator=(CompareSimilarByImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->primaryPicContent_ == nullptr && this->secondaryPicContent_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CompareSimilarByImageRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // primaryPicContent Field Functions 
    bool hasPrimaryPicContent() const { return this->primaryPicContent_ != nullptr;};
    void deletePrimaryPicContent() { this->primaryPicContent_ = nullptr;};
    inline string getPrimaryPicContent() const { DARABONBA_PTR_GET_DEFAULT(primaryPicContent_, "") };
    inline CompareSimilarByImageRequest& setPrimaryPicContent(string primaryPicContent) { DARABONBA_PTR_SET_VALUE(primaryPicContent_, primaryPicContent) };


    // secondaryPicContent Field Functions 
    bool hasSecondaryPicContent() const { return this->secondaryPicContent_ != nullptr;};
    void deleteSecondaryPicContent() { this->secondaryPicContent_ = nullptr;};
    inline string getSecondaryPicContent() const { DARABONBA_PTR_GET_DEFAULT(secondaryPicContent_, "") };
    inline CompareSimilarByImageRequest& setSecondaryPicContent(string secondaryPicContent) { DARABONBA_PTR_SET_VALUE(secondaryPicContent_, secondaryPicContent) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // This parameter is required.
    shared_ptr<string> primaryPicContent_ {};
    // This parameter is required.
    shared_ptr<string> secondaryPicContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif

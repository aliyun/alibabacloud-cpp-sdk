// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROHIBITEDSOFTWAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROHIBITEDSOFTWAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetProhibitedSoftwareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProhibitedSoftwareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProhibitedSoftwareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
    };
    GetProhibitedSoftwareRequest() = default ;
    GetProhibitedSoftwareRequest(const GetProhibitedSoftwareRequest &) = default ;
    GetProhibitedSoftwareRequest(GetProhibitedSoftwareRequest &&) = default ;
    GetProhibitedSoftwareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProhibitedSoftwareRequest() = default ;
    GetProhibitedSoftwareRequest& operator=(const GetProhibitedSoftwareRequest &) = default ;
    GetProhibitedSoftwareRequest& operator=(GetProhibitedSoftwareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SoftwareId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SoftwareId& obj) { 
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
      };
      friend void from_json(const Darabonba::Json& j, SoftwareId& obj) { 
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
      };
      SoftwareId() = default ;
      SoftwareId(const SoftwareId &) = default ;
      SoftwareId(SoftwareId &&) = default ;
      SoftwareId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SoftwareId() = default ;
      SoftwareId& operator=(const SoftwareId &) = default ;
      SoftwareId& operator=(SoftwareId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->softwareId_ == nullptr; };
      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline SoftwareId& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // softwareId Field Functions 
      bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
      void deleteSoftwareId() { this->softwareId_ = nullptr;};
      inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
      inline SoftwareId& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


    protected:
      // Indicates whether the prohibited software is a system built-in prohibited software. Valid values:
      // - **true**: A system built-in prohibited software that is shared across all Alibaba Cloud accounts and cannot be modified or deleted.
      // - **false**: A custom prohibited software under the current Alibaba Cloud account.
      shared_ptr<bool> isDefault_ {};
      // The prohibited software ID. You can obtain the value from the following operations:
      // - [ListProhibitedSoftware](~~ListProhibitedSoftware~~): Lists prohibited software.
      // - [CreateProhibitedSoftware](~~CreateProhibitedSoftware~~): Creates custom prohibited software.
      shared_ptr<string> softwareId_ {};
    };

    virtual bool empty() const override { return this->softwareId_ == nullptr; };
    // softwareId Field Functions 
    bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
    void deleteSoftwareId() { this->softwareId_ = nullptr;};
    inline const GetProhibitedSoftwareRequest::SoftwareId & getSoftwareId() const { DARABONBA_PTR_GET_CONST(softwareId_, GetProhibitedSoftwareRequest::SoftwareId) };
    inline GetProhibitedSoftwareRequest::SoftwareId getSoftwareId() { DARABONBA_PTR_GET(softwareId_, GetProhibitedSoftwareRequest::SoftwareId) };
    inline GetProhibitedSoftwareRequest& setSoftwareId(const GetProhibitedSoftwareRequest::SoftwareId & softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };
    inline GetProhibitedSoftwareRequest& setSoftwareId(GetProhibitedSoftwareRequest::SoftwareId && softwareId) { DARABONBA_PTR_SET_RVALUE(softwareId_, softwareId) };


  protected:
    // The prohibited software ID.
    shared_ptr<GetProhibitedSoftwareRequest::SoftwareId> softwareId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

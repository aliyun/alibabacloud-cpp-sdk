// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEDISKPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_RESIZEDISKPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ResizeDiskParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeDiskParameters& obj) { 
      DARABONBA_PTR_TO_JSON(NewDiskSize, newDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeDiskParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(NewDiskSize, newDiskSize_);
    };
    ResizeDiskParameters() = default ;
    ResizeDiskParameters(const ResizeDiskParameters &) = default ;
    ResizeDiskParameters(ResizeDiskParameters &&) = default ;
    ResizeDiskParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeDiskParameters() = default ;
    ResizeDiskParameters& operator=(const ResizeDiskParameters &) = default ;
    ResizeDiskParameters& operator=(ResizeDiskParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newDiskSize_ == nullptr; };
    // newDiskSize Field Functions 
    bool hasNewDiskSize() const { return this->newDiskSize_ != nullptr;};
    void deleteNewDiskSize() { this->newDiskSize_ = nullptr;};
    inline string getNewDiskSize() const { DARABONBA_PTR_GET_DEFAULT(newDiskSize_, "") };
    inline ResizeDiskParameters& setNewDiskSize(string newDiskSize) { DARABONBA_PTR_SET_VALUE(newDiskSize_, newDiskSize) };


  protected:
    // The target disk capacity after the change.
    shared_ptr<string> newDiskSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

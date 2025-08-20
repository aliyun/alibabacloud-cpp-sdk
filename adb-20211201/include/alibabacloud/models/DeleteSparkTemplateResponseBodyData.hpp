// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESPARKTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETESPARKTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DeleteSparkTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSparkTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSparkTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
    };
    DeleteSparkTemplateResponseBodyData() = default ;
    DeleteSparkTemplateResponseBodyData(const DeleteSparkTemplateResponseBodyData &) = default ;
    DeleteSparkTemplateResponseBodyData(DeleteSparkTemplateResponseBodyData &&) = default ;
    DeleteSparkTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSparkTemplateResponseBodyData() = default ;
    DeleteSparkTemplateResponseBodyData& operator=(const DeleteSparkTemplateResponseBodyData &) = default ;
    DeleteSparkTemplateResponseBodyData& operator=(DeleteSparkTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->succeeded_ != nullptr; };
    // succeeded Field Functions 
    bool hasSucceeded() const { return this->succeeded_ != nullptr;};
    void deleteSucceeded() { this->succeeded_ = nullptr;};
    inline bool succeeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, false) };
    inline DeleteSparkTemplateResponseBodyData& setSucceeded(bool succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


  protected:
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **True**
    // *   **False**
    std::shared_ptr<bool> succeeded_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

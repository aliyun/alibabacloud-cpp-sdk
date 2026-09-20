// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISKWARNINGLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISKWARNINGLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyDiskWarningLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDiskWarningLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(WarningLine, warningLine_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDiskWarningLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(WarningLine, warningLine_);
    };
    ModifyDiskWarningLineRequest() = default ;
    ModifyDiskWarningLineRequest(const ModifyDiskWarningLineRequest &) = default ;
    ModifyDiskWarningLineRequest(ModifyDiskWarningLineRequest &&) = default ;
    ModifyDiskWarningLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDiskWarningLineRequest() = default ;
    ModifyDiskWarningLineRequest& operator=(const ModifyDiskWarningLineRequest &) = default ;
    ModifyDiskWarningLineRequest& operator=(ModifyDiskWarningLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->warningLine_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyDiskWarningLineRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // warningLine Field Functions 
    bool hasWarningLine() const { return this->warningLine_ != nullptr;};
    void deleteWarningLine() { this->warningLine_ = nullptr;};
    inline int32_t getWarningLine() const { DARABONBA_PTR_GET_DEFAULT(warningLine_, 0) };
    inline ModifyDiskWarningLineRequest& setWarningLine(int32_t warningLine) { DARABONBA_PTR_SET_VALUE(warningLine_, warningLine) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The alert threshold. Valid values: 50 to 90.
    // 
    // This parameter is required.
    shared_ptr<int32_t> warningLine_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif

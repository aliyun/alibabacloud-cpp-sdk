// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATANODECONFIGURATIONOUTPUTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATANODECONFIGURATIONOUTPUTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileResponseBodyDataNodeConfigurationOutputList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBodyDataNodeConfigurationOutputList& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RefTableName, refTableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileResponseBodyDataNodeConfigurationOutputList& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RefTableName, refTableName_);
    };
    GetFileResponseBodyDataNodeConfigurationOutputList() = default ;
    GetFileResponseBodyDataNodeConfigurationOutputList(const GetFileResponseBodyDataNodeConfigurationOutputList &) = default ;
    GetFileResponseBodyDataNodeConfigurationOutputList(GetFileResponseBodyDataNodeConfigurationOutputList &&) = default ;
    GetFileResponseBodyDataNodeConfigurationOutputList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBodyDataNodeConfigurationOutputList() = default ;
    GetFileResponseBodyDataNodeConfigurationOutputList& operator=(const GetFileResponseBodyDataNodeConfigurationOutputList &) = default ;
    GetFileResponseBodyDataNodeConfigurationOutputList& operator=(GetFileResponseBodyDataNodeConfigurationOutputList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->refTableName_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline GetFileResponseBodyDataNodeConfigurationOutputList& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // refTableName Field Functions 
    bool hasRefTableName() const { return this->refTableName_ != nullptr;};
    void deleteRefTableName() { this->refTableName_ = nullptr;};
    inline string refTableName() const { DARABONBA_PTR_GET_DEFAULT(refTableName_, "") };
    inline GetFileResponseBodyDataNodeConfigurationOutputList& setRefTableName(string refTableName) { DARABONBA_PTR_SET_VALUE(refTableName_, refTableName) };


  protected:
    // The output name of the current file.
    // 
    // This parameter corresponds to the Output Name parameter under Output after Same Cycle is selected in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> output_ = nullptr;
    // The output table name of the current file.
    // 
    // This parameter corresponds to the Output Table Name parameter under Output after Same Cycle is selected in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> refTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

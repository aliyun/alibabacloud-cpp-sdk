// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINEPIPELINECONFIGSOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINEPIPELINECONFIGSOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineResponseBodyPipelinePipelineConfigSourcesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineResponseBodyPipelinePipelineConfigSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineResponseBodyPipelinePipelineConfigSources& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(sign, sign_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineResponseBodyPipelinePipelineConfigSources& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(sign, sign_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetPipelineResponseBodyPipelinePipelineConfigSources() = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSources(const GetPipelineResponseBodyPipelinePipelineConfigSources &) = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSources(GetPipelineResponseBodyPipelinePipelineConfigSources &&) = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineResponseBodyPipelinePipelineConfigSources() = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSources& operator=(const GetPipelineResponseBodyPipelinePipelineConfigSources &) = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSources& operator=(GetPipelineResponseBodyPipelinePipelineConfigSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->sign_ == nullptr && return this->type_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::GetPipelineResponseBodyPipelinePipelineConfigSourcesData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::GetPipelineResponseBodyPipelinePipelineConfigSourcesData) };
    inline Models::GetPipelineResponseBodyPipelinePipelineConfigSourcesData data() { DARABONBA_PTR_GET(data_, Models::GetPipelineResponseBodyPipelinePipelineConfigSourcesData) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSources& setData(const Models::GetPipelineResponseBodyPipelinePipelineConfigSourcesData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSources& setData(Models::GetPipelineResponseBodyPipelinePipelineConfigSourcesData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string sign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSources& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetPipelineResponseBodyPipelinePipelineConfigSourcesData> data_ = nullptr;
    std::shared_ptr<string> sign_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODYPIPELINERUNSOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODYPIPELINERUNSOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetReleaseStagePipelineRunResponseBodyPipelineRunSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReleaseStagePipelineRunResponseBodyPipelineRunSources& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(sign, sign_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetReleaseStagePipelineRunResponseBodyPipelineRunSources& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(sign, sign_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetReleaseStagePipelineRunResponseBodyPipelineRunSources() = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSources(const GetReleaseStagePipelineRunResponseBodyPipelineRunSources &) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSources(GetReleaseStagePipelineRunResponseBodyPipelineRunSources &&) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReleaseStagePipelineRunResponseBodyPipelineRunSources() = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSources& operator=(const GetReleaseStagePipelineRunResponseBodyPipelineRunSources &) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSources& operator=(GetReleaseStagePipelineRunResponseBodyPipelineRunSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->sign_ == nullptr && return this->type_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData) };
    inline Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData data() { DARABONBA_PTR_GET(data_, Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunSources& setData(const Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunSources& setData(Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string sign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunSources& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunSources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData> data_ = nullptr;
    std::shared_ptr<string> sign_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

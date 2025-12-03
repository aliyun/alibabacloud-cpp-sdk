// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineRunResponseBodyPipelineRunSourcesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineRunResponseBodyPipelineRunSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBodyPipelineRunSources& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(sign, sign_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBodyPipelineRunSources& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(sign, sign_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetPipelineRunResponseBodyPipelineRunSources() = default ;
    GetPipelineRunResponseBodyPipelineRunSources(const GetPipelineRunResponseBodyPipelineRunSources &) = default ;
    GetPipelineRunResponseBodyPipelineRunSources(GetPipelineRunResponseBodyPipelineRunSources &&) = default ;
    GetPipelineRunResponseBodyPipelineRunSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBodyPipelineRunSources() = default ;
    GetPipelineRunResponseBodyPipelineRunSources& operator=(const GetPipelineRunResponseBodyPipelineRunSources &) = default ;
    GetPipelineRunResponseBodyPipelineRunSources& operator=(GetPipelineRunResponseBodyPipelineRunSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->sign_ == nullptr && return this->type_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::GetPipelineRunResponseBodyPipelineRunSourcesData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::GetPipelineRunResponseBodyPipelineRunSourcesData) };
    inline Models::GetPipelineRunResponseBodyPipelineRunSourcesData data() { DARABONBA_PTR_GET(data_, Models::GetPipelineRunResponseBodyPipelineRunSourcesData) };
    inline GetPipelineRunResponseBodyPipelineRunSources& setData(const Models::GetPipelineRunResponseBodyPipelineRunSourcesData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPipelineRunResponseBodyPipelineRunSources& setData(Models::GetPipelineRunResponseBodyPipelineRunSourcesData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string sign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline GetPipelineRunResponseBodyPipelineRunSources& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetPipelineRunResponseBodyPipelineRunSources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetPipelineRunResponseBodyPipelineRunSourcesData> data_ = nullptr;
    std::shared_ptr<string> sign_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

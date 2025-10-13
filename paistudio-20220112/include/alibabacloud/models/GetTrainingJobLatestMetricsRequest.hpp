// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBLATESTMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBLATESTMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobLatestMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobLatestMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Names, names_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobLatestMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Names, names_);
    };
    GetTrainingJobLatestMetricsRequest() = default ;
    GetTrainingJobLatestMetricsRequest(const GetTrainingJobLatestMetricsRequest &) = default ;
    GetTrainingJobLatestMetricsRequest(GetTrainingJobLatestMetricsRequest &&) = default ;
    GetTrainingJobLatestMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobLatestMetricsRequest() = default ;
    GetTrainingJobLatestMetricsRequest& operator=(const GetTrainingJobLatestMetricsRequest &) = default ;
    GetTrainingJobLatestMetricsRequest& operator=(GetTrainingJobLatestMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->names_ == nullptr; };
    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline GetTrainingJobLatestMetricsRequest& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


  protected:
    std::shared_ptr<string> names_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTAPPLICATIONCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTAPPLICATIONCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExportApplicationConfigsResponseBodyApplicationConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ExportApplicationConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportApplicationConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportApplicationConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportApplicationConfigsResponseBody() = default ;
    ExportApplicationConfigsResponseBody(const ExportApplicationConfigsResponseBody &) = default ;
    ExportApplicationConfigsResponseBody(ExportApplicationConfigsResponseBody &&) = default ;
    ExportApplicationConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportApplicationConfigsResponseBody() = default ;
    ExportApplicationConfigsResponseBody& operator=(const ExportApplicationConfigsResponseBody &) = default ;
    ExportApplicationConfigsResponseBody& operator=(ExportApplicationConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationConfigs_ != nullptr
        && this->requestId_ != nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<ExportApplicationConfigsResponseBodyApplicationConfigs> & applicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<ExportApplicationConfigsResponseBodyApplicationConfigs>) };
    inline vector<ExportApplicationConfigsResponseBodyApplicationConfigs> applicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<ExportApplicationConfigsResponseBodyApplicationConfigs>) };
    inline ExportApplicationConfigsResponseBody& setApplicationConfigs(const vector<ExportApplicationConfigsResponseBodyApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline ExportApplicationConfigsResponseBody& setApplicationConfigs(vector<ExportApplicationConfigsResponseBodyApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportApplicationConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ExportApplicationConfigsResponseBodyApplicationConfigs>> applicationConfigs_ = nullptr;
    // 请求ID。
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODYDATADATASOURCEINSTANCELOGSLOGPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODYDATADATASOURCEINSTANCELOGSLOGPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams& obj) { 
      DARABONBA_PTR_TO_JSON(ParaCode, paraCode_);
      DARABONBA_PTR_TO_JSON(ParaValue, paraValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams& obj) { 
      DARABONBA_PTR_FROM_JSON(ParaCode, paraCode_);
      DARABONBA_PTR_FROM_JSON(ParaValue, paraValue_);
    };
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams() = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams(const ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams &) = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams(ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams &&) = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams() = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams& operator=(const ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams &) = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams& operator=(ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paraCode_ != nullptr
        && this->paraValue_ != nullptr; };
    // paraCode Field Functions 
    bool hasParaCode() const { return this->paraCode_ != nullptr;};
    void deleteParaCode() { this->paraCode_ = nullptr;};
    inline string paraCode() const { DARABONBA_PTR_GET_DEFAULT(paraCode_, "") };
    inline ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams& setParaCode(string paraCode) { DARABONBA_PTR_SET_VALUE(paraCode_, paraCode) };


    // paraValue Field Functions 
    bool hasParaValue() const { return this->paraValue_ != nullptr;};
    void deleteParaValue() { this->paraValue_ = nullptr;};
    inline string paraValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
    inline ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


  protected:
    // The parameter code of the log.
    std::shared_ptr<string> paraCode_ = nullptr;
    // The parameter value of the log.
    std::shared_ptr<string> paraValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif

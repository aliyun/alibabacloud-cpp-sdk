// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTDATASOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMPORTDATASOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ImportDataSourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportDataSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ImportDataSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ImportDataSourcesResponseBodyData() = default ;
    ImportDataSourcesResponseBodyData(const ImportDataSourcesResponseBodyData &) = default ;
    ImportDataSourcesResponseBodyData(ImportDataSourcesResponseBodyData &&) = default ;
    ImportDataSourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportDataSourcesResponseBodyData() = default ;
    ImportDataSourcesResponseBodyData& operator=(const ImportDataSourcesResponseBodyData &) = default ;
    ImportDataSourcesResponseBodyData& operator=(ImportDataSourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImportDataSourcesResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ImportDataSourcesResponseBodyData& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason why the data sources failed to be imported. If the data sources were imported, this parameter is left empty.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the data sources were imported. Valid values:
    // 
    // *   true: All data sources were imported.
    // *   false: Specific data sources failed to be imported. You can troubleshoot issues based on the Message parameter.
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

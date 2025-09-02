// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIPROJECTCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDIPROJECTCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDIProjectConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIProjectConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIProjectConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
    };
    ListDIProjectConfigResponseBodyData() = default ;
    ListDIProjectConfigResponseBodyData(const ListDIProjectConfigResponseBodyData &) = default ;
    ListDIProjectConfigResponseBodyData(ListDIProjectConfigResponseBodyData &&) = default ;
    ListDIProjectConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIProjectConfigResponseBodyData() = default ;
    ListDIProjectConfigResponseBodyData& operator=(const ListDIProjectConfigResponseBodyData &) = default ;
    ListDIProjectConfigResponseBodyData& operator=(ListDIProjectConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListDIProjectConfigResponseBodyData& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


  protected:
    // The default global configuration of synchronization solutions. The value indicates the processing rules of different types of DDL messages. Example: {"RENAMECOLUMN":"WARNING","DROPTABLE":"WARNING","CREATETABLE":"WARNING","MODIFYCOLUMN":"WARNING","TRUNCATETABLE":"WARNING","DROPCOLUMN":"WARNING","ADDCOLUMN":"WARNING","RENAMETABLE":"WARNING"}
    // 
    // Field description:
    // 
    // *   RENAMECOLUMN: renames a column.
    // *   DROPTABLE: deletes a table.
    // *   CREATETABLE: creates a table.
    // *   MODIFYCOLUMN: changes the data type of a column.
    // *   TRUNCATETABLE: clears a table.
    // *   DROPCOLUMN: deletes a column.
    // *   ADDCOLUMN: creates a column.
    // *   RENAMETABLE: renames a table.
    // 
    // DataWorks processes a DDL message of a specific type based on the following rules:
    // 
    // *   WARNING: ignores the message and records an alert in real-time synchronization logs. The alert contains information about the situation that the message is ignored because of an execution error.
    // *   IGNORE: discards the message and does not send it to the destination.
    // *   CRITICAL: terminates the real-time synchronization node and sets the node status to Failed.
    // *   NORMAL: sends the message to the destination to process the message. Each destination processes DDL messages based on its own business logic. If DataWorks adopts the NORMAL policy, DataWorks only forwards DDL messages.
    std::shared_ptr<string> config_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

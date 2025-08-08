// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTINDEXREALTIMERESPONSEBODYDATACOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTINDEXREALTIMERESPONSEBODYDATACOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAgentIndexRealTimeResponseBodyDataColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentIndexRealTimeResponseBodyDataColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentIndexRealTimeResponseBodyDataColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetAgentIndexRealTimeResponseBodyDataColumns() = default ;
    GetAgentIndexRealTimeResponseBodyDataColumns(const GetAgentIndexRealTimeResponseBodyDataColumns &) = default ;
    GetAgentIndexRealTimeResponseBodyDataColumns(GetAgentIndexRealTimeResponseBodyDataColumns &&) = default ;
    GetAgentIndexRealTimeResponseBodyDataColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentIndexRealTimeResponseBodyDataColumns() = default ;
    GetAgentIndexRealTimeResponseBodyDataColumns& operator=(const GetAgentIndexRealTimeResponseBodyDataColumns &) = default ;
    GetAgentIndexRealTimeResponseBodyDataColumns& operator=(GetAgentIndexRealTimeResponseBodyDataColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->title_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetAgentIndexRealTimeResponseBodyDataColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetAgentIndexRealTimeResponseBodyDataColumns& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif

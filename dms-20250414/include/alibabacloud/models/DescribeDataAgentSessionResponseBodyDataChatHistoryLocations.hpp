// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSESSIONRESPONSEBODYDATACHATHISTORYLOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSESSIONRESPONSEBODYDATACHATHISTORYLOCATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDataAgentSessionResponseBodyDataChatHistoryLocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAgentSessionResponseBodyDataChatHistoryLocations& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAgentSessionResponseBodyDataChatHistoryLocations& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeDataAgentSessionResponseBodyDataChatHistoryLocations() = default ;
    DescribeDataAgentSessionResponseBodyDataChatHistoryLocations(const DescribeDataAgentSessionResponseBodyDataChatHistoryLocations &) = default ;
    DescribeDataAgentSessionResponseBodyDataChatHistoryLocations(DescribeDataAgentSessionResponseBodyDataChatHistoryLocations &&) = default ;
    DescribeDataAgentSessionResponseBodyDataChatHistoryLocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAgentSessionResponseBodyDataChatHistoryLocations() = default ;
    DescribeDataAgentSessionResponseBodyDataChatHistoryLocations& operator=(const DescribeDataAgentSessionResponseBodyDataChatHistoryLocations &) = default ;
    DescribeDataAgentSessionResponseBodyDataChatHistoryLocations& operator=(DescribeDataAgentSessionResponseBodyDataChatHistoryLocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->url_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDataAgentSessionResponseBodyDataChatHistoryLocations& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeDataAgentSessionResponseBodyDataChatHistoryLocations& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

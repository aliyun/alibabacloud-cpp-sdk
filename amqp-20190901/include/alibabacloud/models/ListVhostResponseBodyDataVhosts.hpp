// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVHOSTRESPONSEBODYDATAVHOSTS_HPP_
#define ALIBABACLOUD_MODELS_LISTVHOSTRESPONSEBODYDATAVHOSTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListVhostResponseBodyDataVhosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVhostResponseBodyDataVhosts& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelNum, channelNum_);
      DARABONBA_PTR_TO_JSON(ConnectionNum, connectionNum_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListVhostResponseBodyDataVhosts& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelNum, channelNum_);
      DARABONBA_PTR_FROM_JSON(ConnectionNum, connectionNum_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListVhostResponseBodyDataVhosts() = default ;
    ListVhostResponseBodyDataVhosts(const ListVhostResponseBodyDataVhosts &) = default ;
    ListVhostResponseBodyDataVhosts(ListVhostResponseBodyDataVhosts &&) = default ;
    ListVhostResponseBodyDataVhosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVhostResponseBodyDataVhosts() = default ;
    ListVhostResponseBodyDataVhosts& operator=(const ListVhostResponseBodyDataVhosts &) = default ;
    ListVhostResponseBodyDataVhosts& operator=(ListVhostResponseBodyDataVhosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelNum_ == nullptr
        && return this->connectionNum_ == nullptr && return this->name_ == nullptr; };
    // channelNum Field Functions 
    bool hasChannelNum() const { return this->channelNum_ != nullptr;};
    void deleteChannelNum() { this->channelNum_ = nullptr;};
    inline int32_t channelNum() const { DARABONBA_PTR_GET_DEFAULT(channelNum_, 0) };
    inline ListVhostResponseBodyDataVhosts& setChannelNum(int32_t channelNum) { DARABONBA_PTR_SET_VALUE(channelNum_, channelNum) };


    // connectionNum Field Functions 
    bool hasConnectionNum() const { return this->connectionNum_ != nullptr;};
    void deleteConnectionNum() { this->connectionNum_ = nullptr;};
    inline int32_t connectionNum() const { DARABONBA_PTR_GET_DEFAULT(connectionNum_, 0) };
    inline ListVhostResponseBodyDataVhosts& setConnectionNum(int32_t connectionNum) { DARABONBA_PTR_SET_VALUE(connectionNum_, connectionNum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListVhostResponseBodyDataVhosts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int32_t> channelNum_ = nullptr;
    std::shared_ptr<int32_t> connectionNum_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif

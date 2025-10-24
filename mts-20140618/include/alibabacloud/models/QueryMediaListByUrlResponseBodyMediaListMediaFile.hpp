// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAFILE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaListMediaFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaListMediaFile& obj) { 
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaListMediaFile& obj) { 
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    QueryMediaListByURLResponseBodyMediaListMediaFile() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaFile(const QueryMediaListByURLResponseBodyMediaListMediaFile &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaFile(QueryMediaListByURLResponseBodyMediaListMediaFile &&) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaListMediaFile() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaFile& operator=(const QueryMediaListByURLResponseBodyMediaListMediaFile &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaFile& operator=(QueryMediaListByURLResponseBodyMediaListMediaFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->state_ == nullptr
        && return this->URL_ == nullptr; };
    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaFile& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaFile& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    // The status of the media file. Valid values:
    // 
    // *   **Normal**: The file is normal.
    // *   **Deleted**: The file is deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The OSS URL of the input file.
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIARESPONSEBODYMEDIAFILE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIARESPONSEBODYMEDIAFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateMediaResponseBodyMediaFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaResponseBodyMediaFile& obj) { 
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaResponseBodyMediaFile& obj) { 
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    UpdateMediaResponseBodyMediaFile() = default ;
    UpdateMediaResponseBodyMediaFile(const UpdateMediaResponseBodyMediaFile &) = default ;
    UpdateMediaResponseBodyMediaFile(UpdateMediaResponseBodyMediaFile &&) = default ;
    UpdateMediaResponseBodyMediaFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaResponseBodyMediaFile() = default ;
    UpdateMediaResponseBodyMediaFile& operator=(const UpdateMediaResponseBodyMediaFile &) = default ;
    UpdateMediaResponseBodyMediaFile& operator=(UpdateMediaResponseBodyMediaFile &&) = default ;
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
    inline UpdateMediaResponseBodyMediaFile& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline UpdateMediaResponseBodyMediaFile& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    // The state of the input file. Valid values:
    // 
    // *   **Normal**: The input file is normal.
    // *   **Deleted**: The input file is deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The name of the OSS bucket in which the input media file is stored.
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

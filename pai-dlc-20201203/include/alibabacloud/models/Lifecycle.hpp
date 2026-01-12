// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLE_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class Lifecycle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Lifecycle& obj) { 
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
    };
    friend void from_json(const Darabonba::Json& j, Lifecycle& obj) { 
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
    };
    Lifecycle() = default ;
    Lifecycle(const Lifecycle &) = default ;
    Lifecycle(Lifecycle &&) = default ;
    Lifecycle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Lifecycle() = default ;
    Lifecycle& operator=(const Lifecycle &) = default ;
    Lifecycle& operator=(Lifecycle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreStop : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreStop& obj) { 
        DARABONBA_PTR_TO_JSON(Exec, exec_);
      };
      friend void from_json(const Darabonba::Json& j, PreStop& obj) { 
        DARABONBA_PTR_FROM_JSON(Exec, exec_);
      };
      PreStop() = default ;
      PreStop(const PreStop &) = default ;
      PreStop(PreStop &&) = default ;
      PreStop(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreStop() = default ;
      PreStop& operator=(const PreStop &) = default ;
      PreStop& operator=(PreStop &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Exec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Exec& obj) { 
          DARABONBA_PTR_TO_JSON(Command, command_);
        };
        friend void from_json(const Darabonba::Json& j, Exec& obj) { 
          DARABONBA_PTR_FROM_JSON(Command, command_);
        };
        Exec() = default ;
        Exec(const Exec &) = default ;
        Exec(Exec &&) = default ;
        Exec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Exec() = default ;
        Exec& operator=(const Exec &) = default ;
        Exec& operator=(Exec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->command_ == nullptr; };
        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
        inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
        inline Exec& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
        inline Exec& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


      protected:
        shared_ptr<vector<string>> command_ {};
      };

      virtual bool empty() const override { return this->exec_ == nullptr; };
      // exec Field Functions 
      bool hasExec() const { return this->exec_ != nullptr;};
      void deleteExec() { this->exec_ = nullptr;};
      inline const PreStop::Exec & getExec() const { DARABONBA_PTR_GET_CONST(exec_, PreStop::Exec) };
      inline PreStop::Exec getExec() { DARABONBA_PTR_GET(exec_, PreStop::Exec) };
      inline PreStop& setExec(const PreStop::Exec & exec) { DARABONBA_PTR_SET_VALUE(exec_, exec) };
      inline PreStop& setExec(PreStop::Exec && exec) { DARABONBA_PTR_SET_RVALUE(exec_, exec) };


    protected:
      shared_ptr<PreStop::Exec> exec_ {};
    };

    class PostStart : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PostStart& obj) { 
        DARABONBA_PTR_TO_JSON(Exec, exec_);
      };
      friend void from_json(const Darabonba::Json& j, PostStart& obj) { 
        DARABONBA_PTR_FROM_JSON(Exec, exec_);
      };
      PostStart() = default ;
      PostStart(const PostStart &) = default ;
      PostStart(PostStart &&) = default ;
      PostStart(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PostStart() = default ;
      PostStart& operator=(const PostStart &) = default ;
      PostStart& operator=(PostStart &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Exec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Exec& obj) { 
          DARABONBA_PTR_TO_JSON(Command, command_);
        };
        friend void from_json(const Darabonba::Json& j, Exec& obj) { 
          DARABONBA_PTR_FROM_JSON(Command, command_);
        };
        Exec() = default ;
        Exec(const Exec &) = default ;
        Exec(Exec &&) = default ;
        Exec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Exec() = default ;
        Exec& operator=(const Exec &) = default ;
        Exec& operator=(Exec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->command_ == nullptr; };
        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
        inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
        inline Exec& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
        inline Exec& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


      protected:
        shared_ptr<vector<string>> command_ {};
      };

      virtual bool empty() const override { return this->exec_ == nullptr; };
      // exec Field Functions 
      bool hasExec() const { return this->exec_ != nullptr;};
      void deleteExec() { this->exec_ = nullptr;};
      inline const PostStart::Exec & getExec() const { DARABONBA_PTR_GET_CONST(exec_, PostStart::Exec) };
      inline PostStart::Exec getExec() { DARABONBA_PTR_GET(exec_, PostStart::Exec) };
      inline PostStart& setExec(const PostStart::Exec & exec) { DARABONBA_PTR_SET_VALUE(exec_, exec) };
      inline PostStart& setExec(PostStart::Exec && exec) { DARABONBA_PTR_SET_RVALUE(exec_, exec) };


    protected:
      shared_ptr<PostStart::Exec> exec_ {};
    };

    virtual bool empty() const override { return this->postStart_ == nullptr
        && this->preStop_ == nullptr; };
    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline const Lifecycle::PostStart & getPostStart() const { DARABONBA_PTR_GET_CONST(postStart_, Lifecycle::PostStart) };
    inline Lifecycle::PostStart getPostStart() { DARABONBA_PTR_GET(postStart_, Lifecycle::PostStart) };
    inline Lifecycle& setPostStart(const Lifecycle::PostStart & postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };
    inline Lifecycle& setPostStart(Lifecycle::PostStart && postStart) { DARABONBA_PTR_SET_RVALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline const Lifecycle::PreStop & getPreStop() const { DARABONBA_PTR_GET_CONST(preStop_, Lifecycle::PreStop) };
    inline Lifecycle::PreStop getPreStop() { DARABONBA_PTR_GET(preStop_, Lifecycle::PreStop) };
    inline Lifecycle& setPreStop(const Lifecycle::PreStop & preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };
    inline Lifecycle& setPreStop(Lifecycle::PreStop && preStop) { DARABONBA_PTR_SET_RVALUE(preStop_, preStop) };


  protected:
    shared_ptr<Lifecycle::PostStart> postStart_ {};
    shared_ptr<Lifecycle::PreStop> preStop_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
